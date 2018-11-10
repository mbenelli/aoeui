/* Copyright 2007, 2008 Peter Klausler.  See COPYING for license. */
#ifndef CLIP_H
#define CLIP_H

#include "types.h"

struct view;
void clip_init(unsigned reg);
size_t clip(unsigned reg, struct view *, position_t, size_t, Boolean_t append);
size_t clip_paste(struct view *, position_t, unsigned reg);

#endif // CLIP_H
