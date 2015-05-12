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

#ifndef FPP_PPB_TEXT_INPUT_CONTROLLER_H
#define FPP_PPB_TEXT_INPUT_CONTROLLER_H

#include <ppapi/c/ppb_text_input_controller.h>


void
ppb_text_input_controller_set_text_input_type(PP_Instance instance, PP_TextInput_Type type);

void
ppb_text_input_controller_update_caret_position(PP_Instance instance, const struct PP_Rect *caret);

void
ppb_text_input_controller_cancel_composition_text(PP_Instance instance);

void
ppb_text_input_controller_update_surrounding_text(PP_Instance instance, struct PP_Var text,
                                                  uint32_t caret, uint32_t anchor);

#endif // FPP_PPB_TEXT_INPUT_CONTROLLER_H
