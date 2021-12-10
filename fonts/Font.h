#ifndef LIGHTRENDERER_FONT_H
#define LIGHTRENDERER_FONT_H


#include "../structures/bool_matrix.h"

class Font {
public:
    virtual int letterWidth() const = 0;
    virtual int letterHeight() const = 0;

    virtual bool_matrix letterData(char letter) const = 0;
};


#endif //LIGHTRENDERER_FONT_H
