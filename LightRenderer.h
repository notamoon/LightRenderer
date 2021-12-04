#ifndef LIGHTRENDERER_LIGHTRENDERER_H
#define LIGHTRENDERER_LIGHTRENDERER_H

#include "direction.h"
#include "color.h"

#include "structures/matrix.h"
#include "fonts/Font.h"

#include "Adafruit_NeoPixel.h"

#include <string>
#include <vector>

using namespace std;

class LightRenderer {
public:
    LightRenderer(Adafruit_NeoPixel &adafruitNeoPixel, unsigned int width, unsigned int height);

    void setColor(int r, int g, int b);

    void setColor(unsigned int zcolor);

    void setFont(const Font *&font);

    void scrollText(const string& text, int x, int y, unsigned int space, unsigned int size, unsigned int direction, unsigned int speed);

    void scrollText(const string& text, int x, int y, unsigned int space, unsigned int direction, unsigned int speed);

    void drawArea(int x, int y, int width, int height);

    void fillArea(int x, int y, int width, int height);

    void drawPixel(int x, int y);

    void clear();
    void setup();

    void update();
    void render();

    void setInverted(bool zinverted);

    void setBrightness(unsigned int zbrightness);

private:
    Adafruit_NeoPixel adafruitNeoPixel;

    unsigned int width, height;

    matrix area;

    unsigned int brightness = 255;
    unsigned int color = 0;

    const Font* font = nullptr;

    unsigned long long timer = 0;

    bool inverted = false;
};


#endif //LIGHTRENDERER_LIGHTRENDERER_H