/*******************************************************************************
 * Size: 16 px
 * Bpp: 1
 * Opts: --bpp 1 --size 16 --font D:/UI/STUDY/assets/汉仪细行楷简.TTF -o D:/UI/STUDY/assets\ui_font_Font17.c --format lvgl -r 0x20-0x7f --symbols 数据信息 --no-compress --no-prefilter
 ******************************************************************************/

#include "../ui.h"

#ifndef UI_FONT_FONT17
#define UI_FONT_FONT17 1
#endif

#if UI_FONT_FONT17

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0x56, 0xa0, 0x80,

    /* U+0022 "\"" */
    0xb6, 0xc0,

    /* U+0023 "#" */
    0x9, 0x81, 0x20, 0x24, 0xb, 0xf7, 0x90, 0x22,
    0x4, 0x7b, 0xf8, 0x12, 0x2, 0x40, 0x0, 0x0,

    /* U+0024 "$" */
    0x23, 0xe3, 0x4, 0x18, 0x31, 0x71, 0x0,

    /* U+0025 "%" */
    0x0, 0x0, 0xf0, 0x24, 0x41, 0x11, 0x8, 0x48,
    0x41, 0x42, 0x2, 0x10, 0x0, 0x80, 0x4, 0x78,
    0x22, 0x21, 0x8, 0x88, 0x24, 0x40, 0xe0,

    /* U+0026 "&" */
    0x1c, 0x18, 0x84, 0x21, 0x10, 0x38, 0x9a, 0x28,
    0x52, 0xc, 0x87, 0x1e, 0x30,

    /* U+0027 "'" */
    0xf0,

    /* U+0028 "(" */
    0x29, 0x49, 0x24, 0x91, 0x22,

    /* U+0029 ")" */
    0x91, 0x12, 0x49, 0x29, 0x40,

    /* U+002A "*" */
    0x25, 0xd9, 0xf2, 0x0,

    /* U+002B "+" */
    0x8, 0x4, 0x2, 0x1, 0xf, 0xf8, 0x40, 0x20,
    0x10, 0x8, 0x0,

    /* U+002C "," */
    0xd8,

    /* U+002D "-" */
    0xff, 0x80,

    /* U+002E "." */
    0xc0,

    /* U+002F "/" */
    0x2, 0x8, 0x10, 0x41, 0x2, 0x8, 0x20, 0x41,
    0x0, 0x0,

    /* U+0030 "0" */
    0x11, 0xb8, 0x61, 0x86, 0x18, 0x92, 0x30,

    /* U+0031 "1" */
    0x2c, 0x94, 0x92,

    /* U+0032 "2" */
    0x39, 0x10, 0x84, 0x20, 0x84, 0x2f,

    /* U+0033 "3" */
    0x3a, 0x44, 0xe0, 0x84, 0x5c,

    /* U+0034 "4" */
    0x4, 0x38, 0x92, 0x44, 0xa7, 0x82, 0x4,

    /* U+0035 "5" */
    0x5d, 0x88, 0x3c, 0x8, 0x21, 0x8, 0xc0,

    /* U+0036 "6" */
    0x11, 0x11, 0x7c, 0xc6, 0x2e,

    /* U+0037 "7" */
    0xfc, 0x21, 0x4, 0x20, 0x84, 0x10,

    /* U+0038 "8" */
    0x3d, 0x14, 0x4e, 0x4e, 0x18, 0xde,

    /* U+0039 "9" */
    0x3b, 0x28, 0x62, 0x78, 0x42, 0x10,

    /* U+003A ":" */
    0x3,

    /* U+003B ";" */
    0x41, 0x80,

    /* U+003C "<" */
    0x0, 0x20, 0x18, 0x1c, 0xc, 0x6, 0x1, 0x0,
    0x18, 0x0, 0xe0, 0x3, 0x0, 0x18,

    /* U+003D "=" */
    0xff, 0xff, 0xc0, 0x1f, 0xf0,

    /* U+003E ">" */
    0x80, 0xc, 0x0, 0x60, 0x3, 0x0, 0x1c, 0x0,
    0xc0, 0x60, 0x30, 0x18, 0x1c, 0x0,

    /* U+003F "?" */
    0x79, 0x12, 0x44, 0x6,

    /* U+0040 "@" */
    0x7, 0xc0, 0x60, 0xc2, 0x0, 0x90, 0xe2, 0x4c,
    0x66, 0x21, 0x99, 0x4, 0x64, 0x12, 0x90, 0x4a,
    0x42, 0x44, 0x96, 0x9, 0x82, 0x10, 0x30, 0x3f,
    0x0,

    /* U+0041 "A" */
    0x2, 0xe, 0x12, 0x12, 0x22, 0xff, 0x42, 0x42,
    0x82, 0x80,

    /* U+0042 "B" */
    0x0, 0x3f, 0x84, 0x24, 0x62, 0xc2, 0x31, 0x6,
    0xa1, 0x9f, 0x0,

    /* U+0043 "C" */
    0x7, 0x8c, 0x58, 0x50, 0x48, 0x4, 0x3, 0x4,
    0xfc,

    /* U+0044 "D" */
    0x1c, 0x1a, 0xc8, 0x88, 0x42, 0x10, 0x48, 0x12,
    0x4, 0xfe,

    /* U+0045 "E" */
    0xf, 0x84, 0x22, 0x8, 0x60, 0x6, 0x7, 0x6,
    0x1, 0xfe,

    /* U+0046 "F" */
    0x7f, 0x41, 0x10, 0x80, 0x83, 0xf0, 0x20, 0x20,
    0xa0, 0x70, 0x0,

    /* U+0047 "G" */
    0x3, 0x8e, 0x48, 0xc8, 0x8, 0x1c, 0x1a, 0x35,
    0xe2, 0x2, 0x3, 0x0,

    /* U+0048 "H" */
    0x4, 0x41, 0x10, 0x22, 0x4, 0x47, 0xf9, 0x21,
    0x24, 0x25, 0x4, 0x60, 0x40,

    /* U+0049 "I" */
    0xc, 0xd2, 0x49, 0x4, 0x10, 0xbc,

    /* U+004A "J" */
    0xc, 0xd4, 0x61, 0x88, 0x20, 0x9e, 0x92, 0x8c,
    0x0,

    /* U+004B "K" */
    0x23, 0x11, 0x11, 0xb, 0x6, 0x82, 0x22, 0xb,
    0x6,

    /* U+004C "L" */
    0x3, 0x86, 0x44, 0x22, 0x61, 0x3, 0x6, 0x43,
    0xde,

    /* U+004D "M" */
    0x1, 0x10, 0x39, 0x82, 0x58, 0x25, 0x41, 0x2a,
    0x11, 0x91, 0x18, 0x90, 0x83, 0x80, 0x0,

    /* U+004E "N" */
    0x19, 0x94, 0x4a, 0x24, 0x94, 0x4a, 0x16, 0xb,
    0x2, 0x0, 0x0,

    /* U+004F "O" */
    0x1e, 0x31, 0xa0, 0x70, 0x18, 0xc, 0x6, 0x4,
    0xfc,

    /* U+0050 "P" */
    0x3f, 0x32, 0x38, 0x85, 0x41, 0x10, 0x44, 0x21,
    0xf0, 0x80, 0x20, 0x8, 0x2, 0x0,

    /* U+0051 "Q" */
    0x1e, 0x30, 0xa0, 0x30, 0x18, 0xf, 0x89, 0x24,
    0x7c, 0x2, 0x0, 0xc0,

    /* U+0052 "R" */
    0x7f, 0x24, 0x29, 0x8, 0x64, 0x26, 0x8, 0x82,
    0x21, 0x4, 0x40, 0x80,

    /* U+0053 "S" */
    0x3, 0x8e, 0x48, 0x46, 0x0, 0xe0, 0xd, 0x3,
    0x2, 0x7e, 0x0,

    /* U+0054 "T" */
    0x1, 0x3f, 0x20, 0xe8, 0x80, 0x40, 0x40, 0x20,
    0x12, 0xe, 0x0,

    /* U+0055 "U" */
    0x7e, 0x24, 0x42, 0x28, 0x41, 0x4, 0x10, 0xc2,
    0x14, 0x22, 0x43, 0xc2,

    /* U+0056 "V" */
    0x7d, 0xd2, 0x51, 0x14, 0x86, 0x21, 0x88, 0x22,
    0x10, 0x78,

    /* U+0057 "W" */
    0x0, 0xf, 0xc3, 0x89, 0x17, 0x21, 0x22, 0x12,
    0x21, 0x46, 0x25, 0xa2, 0x61, 0xc0,

    /* U+0058 "X" */
    0x0, 0x0, 0xf1, 0x88, 0xd4, 0x43, 0x0, 0x8,
    0x1, 0xc0, 0x91, 0x19, 0x9, 0x70, 0x30,

    /* U+0059 "Y" */
    0x70, 0x84, 0x41, 0x10, 0x4c, 0x15, 0x86, 0x41,
    0x20, 0x38, 0x14, 0x9, 0x1, 0x80,

    /* U+005A "Z" */
    0x3f, 0xe4, 0x8, 0x62, 0x0, 0x87, 0x21, 0x18,
    0x61, 0xcb, 0xc7,

    /* U+005B "[" */
    0xf2, 0x49, 0x24, 0x92, 0x70,

    /* U+005C "\\" */
    0x81, 0x1, 0x2, 0x2, 0x2, 0x4, 0x4, 0x4,
    0x8, 0x8,

    /* U+005D "]" */
    0xe4, 0x92, 0x49, 0x24, 0xf0,

    /* U+005E "^" */
    0x58, 0x80,

    /* U+005F "_" */
    0xfc,

    /* U+0060 "`" */
    0xf0,

    /* U+0061 "a" */
    0x32, 0xb5, 0x2f, 0x80,

    /* U+0062 "b" */
    0x24, 0x4a, 0xd9, 0xac,

    /* U+0063 "c" */
    0x3, 0xa1, 0x9, 0x30,

    /* U+0064 "d" */
    0x4, 0x10, 0x8e, 0xca, 0x6a, 0xb3,

    /* U+0065 "e" */
    0x35, 0xac, 0xe0,

    /* U+0066 "f" */
    0xe, 0x24, 0x50, 0xc3, 0xd, 0x8f, 0x14, 0x28,
    0x90, 0xc0,

    /* U+0067 "g" */
    0x3a, 0xa1, 0x75, 0x39, 0x80,

    /* U+0068 "h" */
    0x0, 0x84, 0x10, 0x59, 0xa4, 0x92, 0x8c,

    /* U+0069 "i" */
    0x4, 0x25, 0x27,

    /* U+006A "j" */
    0x10, 0x4, 0xe5, 0x89, 0x94, 0xa2, 0x0,

    /* U+006B "k" */
    0x21, 0x4, 0x10, 0x7a, 0x2f, 0x24, 0x88,

    /* U+006C "l" */
    0x22, 0x44, 0x88, 0x8a, 0x40,

    /* U+006D "m" */
    0x4b, 0x3e, 0xb5, 0x4b, 0x29, 0x18,

    /* U+006E "n" */
    0xd9, 0xa4, 0xa2, 0x88,

    /* U+006F "o" */
    0x74, 0x63, 0x26, 0x0,

    /* U+0070 "p" */
    0x5b, 0x94, 0x52, 0x71, 0x4, 0x20,

    /* U+0071 "q" */
    0x3d, 0x18, 0xa6, 0x68, 0x41, 0x0,

    /* U+0072 "r" */
    0x57, 0x22, 0x30,

    /* U+0073 "s" */
    0x3a, 0x48, 0x37, 0x0,

    /* U+0074 "t" */
    0x26, 0x44, 0x47,

    /* U+0075 "u" */
    0x1, 0x14, 0xa6, 0xab, 0x10,

    /* U+0076 "v" */
    0x42, 0x52, 0xa6, 0x0,

    /* U+0077 "w" */
    0x21, 0x49, 0x79, 0x6a, 0xc4,

    /* U+0078 "x" */
    0x26, 0x38, 0x41, 0x84, 0xc0,

    /* U+0079 "y" */
    0x41, 0x24, 0x9e, 0x50, 0xc5, 0x18,

    /* U+007A "z" */
    0x78, 0x46, 0x18, 0x98,

    /* U+007B "{" */
    0x9, 0x24, 0xa4, 0x49, 0x24,

    /* U+007C "|" */
    0xff, 0xfe,

    /* U+007D "}" */
    0x89, 0x24, 0x8a, 0x49, 0x28,

    /* U+007E "~" */
    0x60, 0xc0,

    /* U+4FE1 "信" */
    0x10, 0x0, 0x8c, 0x4, 0x20, 0x43, 0xe4, 0x60,
    0x60, 0xe2, 0x88, 0x4, 0x9c, 0x23, 0x1, 0x7,
    0x8, 0xc8, 0x48, 0x82, 0x24, 0x0, 0xc0,

    /* U+606F "息" */
    0x8, 0x2, 0xc0, 0xa4, 0x12, 0x83, 0x90, 0x62,
    0x16, 0x41, 0x88, 0x3e, 0x1, 0x7f, 0x94, 0x48,
    0x60, 0xf8,

    /* U+636E "据" */
    0x8, 0x0, 0x21, 0xc0, 0x89, 0x2, 0x44, 0x1d,
    0x61, 0xa6, 0x80, 0xe2, 0xc2, 0xbc, 0x3b, 0x21,
    0x28, 0xf4, 0xcc, 0x4b, 0x22, 0x18, 0xb8, 0x1,
    0x0,

    /* U+6570 "数" */
    0x18, 0x0, 0x28, 0x2, 0xa2, 0x1b, 0x10, 0xe,
    0x40, 0xe2, 0x45, 0xee, 0xa, 0x28, 0x54, 0x20,
    0xbb, 0xf, 0x44, 0xa, 0xac, 0x1d, 0xd, 0x88,
    0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 128, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 128, .box_w = 2, .box_h = 9, .ofs_x = 3, .ofs_y = -2},
    {.bitmap_index = 4, .adv_w = 128, .box_w = 3, .box_h = 4, .ofs_x = 2, .ofs_y = 8},
    {.bitmap_index = 6, .adv_w = 183, .box_w = 11, .box_h = 11, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 22, .adv_w = 106, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 29, .adv_w = 256, .box_w = 14, .box_h = 13, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 52, .adv_w = 183, .box_w = 10, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 65, .adv_w = 128, .box_w = 1, .box_h = 4, .ofs_x = 4, .ofs_y = 8},
    {.bitmap_index = 66, .adv_w = 68, .box_w = 3, .box_h = 13, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 71, .adv_w = 68, .box_w = 3, .box_h = 13, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 76, .adv_w = 112, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 80, .adv_w = 180, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 91, .adv_w = 128, .box_w = 2, .box_h = 3, .ofs_x = 3, .ofs_y = -3},
    {.bitmap_index = 92, .adv_w = 181, .box_w = 9, .box_h = 1, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 94, .adv_w = 128, .box_w = 2, .box_h = 1, .ofs_x = 3, .ofs_y = -1},
    {.bitmap_index = 95, .adv_w = 149, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 105, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 112, .adv_w = 128, .box_w = 3, .box_h = 8, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 115, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 121, .adv_w = 128, .box_w = 5, .box_h = 8, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 126, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 133, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 140, .adv_w = 128, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 145, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 151, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 157, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 163, .adv_w = 128, .box_w = 2, .box_h = 4, .ofs_x = 3, .ofs_y = -1},
    {.bitmap_index = 164, .adv_w = 128, .box_w = 2, .box_h = 5, .ofs_x = 3, .ofs_y = -2},
    {.bitmap_index = 166, .adv_w = 195, .box_w = 11, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 180, .adv_w = 181, .box_w = 9, .box_h = 4, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 185, .adv_w = 197, .box_w = 11, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 199, .adv_w = 128, .box_w = 4, .box_h = 8, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 203, .adv_w = 250, .box_w = 14, .box_h = 14, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 228, .adv_w = 136, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 238, .adv_w = 159, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 249, .adv_w = 155, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 258, .adv_w = 176, .box_w = 10, .box_h = 8, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 268, .adv_w = 161, .box_w = 10, .box_h = 8, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 278, .adv_w = 145, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 289, .adv_w = 154, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 301, .adv_w = 184, .box_w = 11, .box_h = 9, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 314, .adv_w = 104, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 320, .adv_w = 121, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 329, .adv_w = 148, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 338, .adv_w = 165, .box_w = 9, .box_h = 8, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 347, .adv_w = 233, .box_w = 13, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 362, .adv_w = 161, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 373, .adv_w = 159, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 382, .adv_w = 168, .box_w = 10, .box_h = 11, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 396, .adv_w = 161, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 408, .adv_w = 185, .box_w = 10, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 420, .adv_w = 158, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 431, .adv_w = 157, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 442, .adv_w = 194, .box_w = 12, .box_h = 8, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 454, .adv_w = 166, .box_w = 10, .box_h = 8, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 464, .adv_w = 203, .box_w = 12, .box_h = 9, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 478, .adv_w = 208, .box_w = 13, .box_h = 9, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 493, .adv_w = 161, .box_w = 10, .box_h = 11, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 507, .adv_w = 196, .box_w = 11, .box_h = 8, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 518, .adv_w = 70, .box_w = 3, .box_h = 12, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 523, .adv_w = 135, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 533, .adv_w = 70, .box_w = 3, .box_h = 12, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 538, .adv_w = 111, .box_w = 3, .box_h = 3, .ofs_x = 2, .ofs_y = 8},
    {.bitmap_index = 540, .adv_w = 128, .box_w = 6, .box_h = 1, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 541, .adv_w = 128, .box_w = 1, .box_h = 4, .ofs_x = 4, .ofs_y = 8},
    {.bitmap_index = 542, .adv_w = 94, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 546, .adv_w = 77, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 550, .adv_w = 87, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 554, .adv_w = 110, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 560, .adv_w = 84, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 563, .adv_w = 125, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 573, .adv_w = 100, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 578, .adv_w = 106, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 585, .adv_w = 62, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 588, .adv_w = 91, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 595, .adv_w = 103, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 602, .adv_w = 67, .box_w = 4, .box_h = 9, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 607, .adv_w = 157, .box_w = 9, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 613, .adv_w = 113, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 617, .adv_w = 90, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 621, .adv_w = 107, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 627, .adv_w = 104, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 633, .adv_w = 79, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 636, .adv_w = 88, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 640, .adv_w = 81, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 643, .adv_w = 117, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 648, .adv_w = 92, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 652, .adv_w = 134, .box_w = 8, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 657, .adv_w = 118, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 662, .adv_w = 102, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 668, .adv_w = 103, .box_w = 6, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 672, .adv_w = 87, .box_w = 3, .box_h = 13, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 677, .adv_w = 61, .box_w = 1, .box_h = 15, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 679, .adv_w = 87, .box_w = 3, .box_h = 13, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 684, .adv_w = 115, .box_w = 5, .box_h = 2, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 686, .adv_w = 256, .box_w = 13, .box_h = 14, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 709, .adv_w = 256, .box_w = 11, .box_h = 13, .ofs_x = 3, .ofs_y = -2},
    {.bitmap_index = 727, .adv_w = 256, .box_w = 14, .box_h = 14, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 752, .adv_w = 256, .box_w = 14, .box_h = 14, .ofs_x = 1, .ofs_y = -2}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint16_t unicode_list_1[] = {
    0x0, 0x108e, 0x138d, 0x158f
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 20449, .range_length = 5520, .glyph_id_start = 96,
        .unicode_list = unicode_list_1, .glyph_id_ofs_list = NULL, .list_length = 4, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LVGL_VERSION_MAJOR == 8
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
#endif

#if LVGL_VERSION_MAJOR >= 8
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 2,
    .bpp = 1,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LVGL_VERSION_MAJOR == 8
    .cache = &cache
#endif
};



/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t ui_font_Font17 = {
#else
lv_font_t ui_font_Font17 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 15,          /*The maximum line height required by the font*/
    .base_line = 3,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -2,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if UI_FONT_FONT17*/

