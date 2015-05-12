/*
 * Copyright © 2013-2015  Rinat Ibragimov
 *
 * This file is part of FreshPlayerPlugin.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#ifndef FPP_SCREENSAVER_CONTROL_H
#define FPP_SCREENSAVER_CONTROL_H

#include <X11/Xlib.h>
#include <stdint.h>
#include "compat.h"


enum screensaver_types {
    SST_XSCREENSAVER =          (1 << 0),
    SST_FDO_SCREENSAVER =       (1 << 1),   // freedesktop.org screensaver interface spec
    SST_GNOME_SCREENSAVER =     (1 << 2),
    SST_KDE_SCREENSAVER =       (1 << 3),
    SST_CINNAMON_SCREENSAVER =  (1 << 4),
};


uint32_t
screensaver_type_detect(Display *dpy);

void
screensaver_deactivate(Display *dpy, uint32_t types);

void
screensaver_connect(void);

void
screensaver_disconnect(void);


#endif // FPP_SCREENSAVER_CONTROL_H
