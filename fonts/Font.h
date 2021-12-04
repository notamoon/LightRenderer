#ifndef LIGHTRENDERER_FONT_H
#define LIGHTRENDERER_FONT_H


#include "../structures/matrix.h"

class Font {
public:
    virtual int letterWidth() const = 0;
    virtual int letterHeight() const = 0;

    virtual matrix letterData(char letter) const = 0;
};


#endif //LIGHTRENDERER_FONT_H
