/*
 * Copyright (C) 2015 Sony Mobile Communications Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2, as
 * published by the Free Software Foundation.
 */
#ifndef __ASM_BITREV_H
#define __ASM_BITREV_H

static __always_inline __attribute_const__ u32 __arch_bitrev32(u32 x)
{
	__asm__ ("rbit %0, %1" : "=r" (x) : "r" (x));
	return x;
}

static __always_inline __attribute_const__ u16 __arch_bitrev16(u16 x)
{
	return __arch_bitrev32((u32)x) >> 16;
}

static __always_inline __attribute_const__ u8 __arch_bitrev8(u8 x)
{
	return __arch_bitrev32((u32)x) >> 24;
}

#endif
