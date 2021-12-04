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
    /**
     *
     * @param adafruitNeoPixel Reference to the Adafruit_NeoPixel to render on
     * @param width Width of the display
     * @param height Height of the display
     */
    LightRenderer(Adafruit_NeoPixel &adafruitNeoPixel, unsigned int width, unsigned int height);

    /**
     * Sets the renderer's current color to the specified color.
     * @param r the red component of the new rendering color
     * @param g the blue component of the new rendering color
     * @param b the green component of the new rendering color
     */
    void setColor(int r, int g, int b);

    /**
     * Sets the renderer's current color to the specified color.
     * @param zcolor the new rendering color
     */
    void setColor(unsigned int zcolor);

    /**
     * Sets the renderer's current font to the specified fnt.
     * @param font the new font
     */
    void setFont(const Font *&font);

    /**
     * Draw scrolling text onto the display.
     * @param text text to scroll
     * @param x the x position of the text on the display (0 = left)
     * @param y the y position of the text on the display (0 = bottom)
     * @param space spacing between characters
     * @param size size of the scrolling area, set to -1 to use maximum size
     * @param direction direction to scroll the text
     * @param speed speed of the scrolling
     */
    void scrollText(const string& text, int x, int y, unsigned int space, unsigned int size, unsigned int direction, unsigned int speed);

    /**
     * Draw scrolling text onto the display.
     * @param text text to scroll
     * @param x the x position of the text on the display (0 = left)
     * @param y the y position of the text on the display (0 = bottom)
     * @param space spacing between characters
     * @param direction direction to scroll the text
     * @param speed speed of the scrolling
     */
    void scrollText(const string& text, int x, int y, unsigned int space, unsigned int direction, unsigned int speed);

    /**
     * Draw a rectangular outlined area onto the display.
     * @param x the x position of the area on the display (0 = left)
     * @param y the y position of the area on the display (0 = bottom)
     * @param width the width of the area on the display
     * @param height the height of the area on the display
     */
    void drawArea(int x, int y, int width, int height);

    /**
     * Draw a rectangular filled area onto the display.
     * @param x the x position of the area on the display (0 = left)
     * @param y the y position of the area on the display (0 = bottom)
     * @param width the width of the area on the display
     * @param height the height of the area on the display
     */
    void fillArea(int x, int y, int width, int height);

    /**
     * Set the color of a specific pixel on the display
     * @param x the x position of the pixel on the display (0 = left)
     * @param y the y position of the pixel on the display (0 = bottom)
     */
    void drawPixel(int x, int y);

    /**
     * Clear the contents of the display.
     */
    void clear();

    /**
     * Prepares the display for rendering.
     */
    void setup();

    /**
     * Updates internal timer of the display.
     */
    void update();
    /**
     * Renders the display contents.
     */
    void render();

    /**
     * Inverts the display horizontally so the text is rendered upsidedown
     * @param zinverted whether the display is inverted or not
     */
    void setInverted(bool zinverted);

    /**
     * Sets the brightness of the display to the specified brightness
     * @param zbrightness new brightness (0-255)
     */
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