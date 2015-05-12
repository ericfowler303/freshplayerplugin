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

#ifndef FPP_PPB_UMA_H
#define FPP_PPB_UMA_H

#include <ppapi/c/private/ppb_uma_private.h>


void
ppb_uma_histogram_custom_times(PP_Instance instance, struct PP_Var name, int64_t sample,
                               int64_t min, int64_t max, uint32_t bucket_count);

void
ppb_uma_histogram_custom_counts(PP_Instance instance, struct PP_Var name, int32_t sample,
                                int32_t min, int32_t max, uint32_t bucket_count);

void
ppb_uma_histogram_enumeration(PP_Instance instance, struct PP_Var name, int32_t sample,
                              int32_t boundary_value);

int32_t
ppb_uma_is_crash_reporting_enabled(PP_Instance instance, struct PP_CompletionCallback callback);

#endif // FPP_PPB_UMA_H
