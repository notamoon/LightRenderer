#ifndef LIGHTRENDERER_COLOR_H
#define LIGHTRENDERER_COLOR_H

#include "Adafruit_NeoPixel.h"


namespace Color {

    const int BLACK = Adafruit_NeoPixel::Color(0,0,0);

    const int WHITE = Adafruit_NeoPixel::Color(255,255,255);

    const int RED = Adafruit_NeoPixel::Color(255,0,0);

    const int LIME = Adafruit_NeoPixel::Color(0,255,0);

    const int BLUE = Adafruit_NeoPixel::Color(0,0,255);

    const int YELLOW = Adafruit_NeoPixel::Color(255,255,0);

    const int CYAN = Adafruit_NeoPixel::Color(0,255,255);

    const int MAGENTA = Adafruit_NeoPixel::Color(255,0,255);
}

#endif //LIGHTRENDERER_COLOR_H
