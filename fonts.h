#ifndef LIGHTRENDERER_FONTS_H
#define LIGHTRENDERER_FONTS_H

#include "fonts/Font5x7.h"
#include "fonts/Font7x12.h"
#include "fonts/Font.h"

namespace Fonts {

    const Font* FONT1 = new Font5x7();
    const Font* FONT2 = new Font7x12();
}

#endif //LIGHTRENDERER_FONTS_H