// Copyright (c) 2011-2012 LKC Technologies, Inc.  All rights reserved.
// LKC Technologies, Inc. PROPRIETARY AND CONFIDENTIAL

#ifndef CODE128_H
#define CODE128_H

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

size_t code128_len(const char *s);
size_t code128a_encode(const char *s, char *out, size_t maxlength);
size_t code128b_encode(const char *s, char *out, size_t maxlength);

#ifdef __cplusplus
}
#endif

#endif // CODE128_H
