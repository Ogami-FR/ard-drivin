// Bitmap definition for arduboy 'big_3.png' in 1-bit mask + 1-bit data in two bytes
#include <avr/pgmspace.h>

#ifndef big_3_H
#define big_3_H

static const unsigned char big_3[] PROGMEM = {
	// Size of bitmap: 8 x 14. Hotspot at :4, 7
	8,14,4,7,
	0xFC,0x00,0xFE,0x08,0xFF,0x0C,0xFF,0x44,0xFF,0x44,0xFF,0xFC,0xFE,0xB8,0xFC,0x00,
	0x0F,0x00,0x1F,0x04,0x3F,0x0C,0x3F,0x08,0x3F,0x08,0x3F,0x0F,0x1F,0x07,0x0F,0x00
};

#endif
