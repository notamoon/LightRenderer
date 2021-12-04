#include "LightRenderer.h"
#include "structures/bool_matrix.h"

LightRenderer::LightRenderer(Adafruit_NeoPixel &adafruitNeoPixel, unsigned int width, unsigned int height) {
    this->adafruitNeoPixel = adafruitNeoPixel;
    this->width = width;
    this->height = height;

    this->area = matrix(width, height);
}

void LightRenderer::setColor(int r, int g, int b) {
    this->color = 1;
}

void LightRenderer::setColor(unsigned int zcolor = 0) {
    this->color = zcolor;
}

void LightRenderer::setFont(const Font *&zfont) {
    this->font = zfont;
}

void LightRenderer::setInverted(bool zinverted) {
    this->inverted = zinverted;
}

void LightRenderer::setBrightness(unsigned int zbrightness) {
    this->brightness = zbrightness;
}

void LightRenderer::scrollText(const string &text, int x, int y, unsigned int space, unsigned int direction, unsigned int speed) {
    scrollText(text, x, y, space, -1, direction, speed);
}

void LightRenderer::scrollText(const string& text, int x, int y, unsigned int space, unsigned int size, unsigned int direction, unsigned int speed) {
    if (direction == Direction::HORIZONTAL) {
        unsigned int totalWidth = (font->letterWidth() + space) * text.length();

        if (size == -1) size = totalWidth;

        if (size + x - 1 > width) size = width - x;

        totalWidth += size;

        bool_matrix textArea(totalWidth, font->letterHeight());

        unsigned int ax = 0;
        unsigned int ay = 0;

        for (char i : text) {
            matrix letterData = font->letterData(i);

            if (inverted) {
                for (int dy = 0, cy = font->letterHeight() - 1; dy < font->letterHeight(); dy++, cy--) {
                    for (int dx = 0; dx < font->letterWidth(); dx++) {
                        textArea[ax + dx][ay + dy] = letterData[dx][cy];
                    }
                }
            }
            else {
                for (int dy = 0; dy < font->letterHeight(); dy++) {
                    for (int dx = 0; dx < font->letterWidth(); dx++) {
                        textArea[ax + dx][ay + dy] = letterData[dx][dy];
                    }
                }
            }

            ax += font->letterWidth() + space;
        }

        unsigned int progress = speed != 0 ? timer / speed % totalWidth : 0;

        for (int cy = y + font->letterHeight() - 1, dy = 0; cy >= y; cy--, dy++) {
            for (int cx = x, dx = 0; cx < x + totalWidth; cx++, dx++) {
                if (dx < size && textArea[progress][dy]) area.set_safe(cx, cy, color);

                if (!inverted) progress++;
                else progress--;

                if (progress == totalWidth) progress = 0;
                if (progress == -1) progress = totalWidth - 1;
            }
        }
    }
    if (direction == Direction::VERTICAL) {
        unsigned int totalHeight = (font->letterHeight() + space) * text.length();

        if (size == -1) size = totalHeight;

        if (size + y - 1 > height) size = height - y;

        totalHeight += size;

        bool_matrix textArea(font->letterWidth(), totalHeight);

        unsigned int ax = 0;
        unsigned int ay = 0;

        for (char i : text) {
            matrix letterData = font->letterData(i);

            for (int dy = font->letterHeight() - 1; dy >= 0; dy--) {
                for (int dx = 0; dx < font->letterWidth(); dx++) {
                    textArea[ax + dx][ay + dy] = letterData[dx][dy];
                }
            }

            ay += font->letterHeight() + space;
        }

        unsigned int progress = speed != 0 ? (timer / speed + size - 1 - y) % totalHeight : size - 1 - y;

        for (int cx = x, dx = 0; cx < x + font->letterWidth(); cx++, dx++) {
            for (int cy = y, dy = 0; cy < y + totalHeight; cy++, dy++) {
                if (dy < size && textArea[dx][progress]) area.set_safe(cx, cy, color);

                progress--;

                if (progress == totalHeight) progress = 0;
                if (progress == -1) progress = totalHeight - 1;
            }
        }
    }
}

void LightRenderer::drawArea(int x, int y, int zwidth, int zheight) {
    for (int ix = 0; ix < zwidth; ix++) {
        for (int iy = 0; iy < zheight; iy++) {
            if (ix == 0 || ix == zwidth - 1 || iy == 0 || iy == zheight - 1) {
                area.set_safe(x + ix, y + iy, color);
            }
        }
    }
}

void LightRenderer::fillArea(int x, int y, int zwidth, int zheight) {
    for (int ix = 0; ix < zwidth; ix++) {
        for (int iy = 0; iy < zheight; iy++) {
            area.set_safe(x + ix, y + iy, color);
        }
    }
}

void LightRenderer::drawPixel(int x, int y) {
    fillArea(x, y, 1, 1);
}

void LightRenderer::clear() {
    this->area = matrix(width, height);
}

void LightRenderer::setup() {
    adafruitNeoPixel.begin();

    clear();
    render();
}

void LightRenderer::update() {
    timer++;
}

void LightRenderer::render() {
    adafruitNeoPixel.clear();

    int pixel = 0;

    for (int y = 0; y < height; y++) {
        if (y % 2 == 0) {
            for (int x = 0; x < width; x++)
                adafruitNeoPixel.setPixelColor(pixel++, area[x][y]);
        }
        else {
            for (unsigned int x = width - 1; x >= 0; x--)
                adafruitNeoPixel.setPixelColor(pixel++, area[x][y]);
        }
    }

    adafruitNeoPixel.setBrightness(brightness);
    adafruitNeoPixel.show();
}