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

#ifndef FPP_PPB_CURSOR_CONTROL_H
#define FPP_PPB_CURSOR_CONTROL_H

#include <ppapi/c/dev/ppb_cursor_control_dev.h>


PP_Bool
ppb_cursor_control_set_cursor(PP_Instance instance, enum PP_CursorType_Dev type,
                              PP_Resource custom_image, const struct PP_Point *hot_spot);

PP_Bool
ppb_cursor_control_lock_cursor(PP_Instance instance);

PP_Bool
ppb_cursor_control_unlock_cursor(PP_Instance instance);

PP_Bool
ppb_cursor_control_has_cursor_lock(PP_Instance instance);

PP_Bool
ppb_cursor_control_can_lock_cursor(PP_Instance instance);

#endif // FPP_PPB_CURSOR_CONTROL_H
