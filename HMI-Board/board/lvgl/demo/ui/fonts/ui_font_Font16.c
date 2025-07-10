/*******************************************************************************
 * Size: 12 px
 * Bpp: 1
 * Opts: --bpp 1 --size 12 --font D:/UI/STUDY/assets/汉仪细行楷简.TTF -o D:/UI/STUDY/assets\ui_font_Font16.c --format lvgl -r 0x20-0x7f --symbols 确认 --no-compress --no-prefilter
 ******************************************************************************/

#include "../ui.h"

#ifndef UI_FONT_FONT16
#define UI_FONT_FONT16 1
#endif

#if UI_FONT_FONT16

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0x1a, 0x82,

    /* U+0022 "\"" */
    0xb7, 0x0,

    /* U+0023 "#" */
    0x14, 0x14, 0x25, 0xfe, 0x24, 0x27, 0xfc, 0x24,
    0x20, 0x0,

    /* U+0024 "$" */
    0x23, 0x93, 0x6, 0xa, 0x2e, 0x20,

    /* U+0025 "%" */
    0x20, 0x34, 0x39, 0x12, 0x88, 0xa4, 0x11, 0x0,
    0x90, 0x5a, 0x24, 0x91, 0x48, 0x70,

    /* U+0026 "&" */
    0x38, 0x44, 0x49, 0x31, 0x4a, 0x86, 0x86, 0x79,

    /* U+0027 "'" */
    0xe0,

    /* U+0028 "(" */
    0x1a, 0xaa, 0x90,

    /* U+0029 ")" */
    0x29, 0x55, 0xa0,

    /* U+002A "*" */
    0x44, 0xae, 0x40,

    /* U+002B "+" */
    0x10, 0x20, 0x40, 0x8f, 0xe2, 0x4, 0x8,

    /* U+002C "," */
    0x40,

    /* U+002D "-" */
    0xfe,

    /* U+002E "." */
    0x40,

    /* U+002F "/" */
    0x0, 0x44, 0x22, 0x21, 0x10, 0x80, 0x0,

    /* U+0030 "0" */
    0x74, 0x63, 0x19, 0x49, 0x80,

    /* U+0031 "1" */
    0x5a, 0xa8,

    /* U+0032 "2" */
    0x79, 0x22, 0x48, 0xf0,

    /* U+0033 "3" */
    0x71, 0x26, 0x12, 0x24,

    /* U+0034 "4" */
    0x10, 0xc5, 0x24, 0x78, 0x40, 0x0,

    /* U+0035 "5" */
    0x78, 0xe1, 0x22, 0xc0,

    /* U+0036 "6" */
    0x12, 0x47, 0x99, 0xe0,

    /* U+0037 "7" */
    0xf1, 0x24, 0x48, 0x80,

    /* U+0038 "8" */
    0x79, 0xae, 0x99, 0xe0,

    /* U+0039 "9" */
    0x79, 0x97, 0x24, 0x0,

    /* U+003A ":" */
    0x8,

    /* U+003B ";" */
    0xa0,

    /* U+003C "<" */
    0x1, 0x6, 0x18, 0x60, 0x80, 0x60, 0x1c, 0x3,

    /* U+003D "=" */
    0xfe, 0x3, 0xf8,

    /* U+003E ">" */
    0x80, 0x60, 0x18, 0x6, 0x1, 0x6, 0x18, 0xe0,

    /* U+003F "?" */
    0xe5, 0x48, 0x20,

    /* U+0040 "@" */
    0xf, 0x6, 0x19, 0x1, 0x27, 0x19, 0x13, 0x42,
    0x68, 0x4d, 0xa, 0xa2, 0x4c, 0xb0, 0xe1, 0xf,
    0xc0,

    /* U+0041 "A" */
    0x19, 0x4a, 0x9f, 0xc6, 0x30, 0x0,

    /* U+0042 "B" */
    0x0, 0xfc, 0x8a, 0x65, 0x88, 0xa8, 0xce,

    /* U+0043 "C" */
    0x1e, 0x45, 0x14, 0x8, 0x10, 0x9e, 0x0,

    /* U+0044 "D" */
    0x18, 0x74, 0xa2, 0x21, 0x21, 0x41, 0x3e,

    /* U+0045 "E" */
    0x1e, 0x44, 0x80, 0xc1, 0x1c, 0x3f, 0x0,

    /* U+0046 "F" */
    0x7e, 0x20, 0x9f, 0x10, 0x42, 0x28,

    /* U+0047 "G" */
    0x4, 0x79, 0x14, 0x8, 0xd2, 0xb9, 0x4, 0x0,

    /* U+0048 "H" */
    0x12, 0x12, 0x12, 0x7e, 0xa2, 0xa2, 0x43,

    /* U+0049 "I" */
    0x35, 0x51, 0x12, 0xe0,

    /* U+004A "J" */
    0x1b, 0x52, 0x90, 0x99, 0x54, 0xc0,

    /* U+004B "K" */
    0x4c, 0x91, 0x43, 0x89, 0x11, 0x61, 0x0,

    /* U+004C "L" */
    0xe, 0x24, 0x59, 0x2, 0x1c, 0x77, 0x0,

    /* U+004D "M" */
    0x6, 0x41, 0x50, 0x56, 0x13, 0x42, 0x68, 0x99,
    0x22, 0x14, 0x0,

    /* U+004E "N" */
    0x26, 0x65, 0x4a, 0x58, 0xb0, 0xe1, 0x0,

    /* U+004F "O" */
    0x38, 0x8a, 0xc, 0x18, 0x50, 0x9e, 0x0,

    /* U+0050 "P" */
    0x7d, 0x26, 0x89, 0x12, 0x27, 0x90, 0x20, 0x40,

    /* U+0051 "Q" */
    0x3c, 0x8a, 0xc, 0x18, 0x3e, 0x9e, 0x2, 0x2,

    /* U+0052 "R" */
    0x7c, 0xa2, 0x22, 0x3c, 0x48, 0x44, 0x42,

    /* U+0053 "S" */
    0x1e, 0x48, 0x80, 0xe0, 0x30, 0x9e, 0x0,

    /* U+0054 "T" */
    0x0, 0xfa, 0x20, 0x41, 0x2, 0x9, 0xc,

    /* U+0055 "U" */
    0xf9, 0x92, 0x22, 0x22, 0x46, 0x4a, 0x71,

    /* U+0056 "V" */
    0xf7, 0x55, 0x2a, 0x64, 0x49, 0xc, 0x0,

    /* U+0057 "W" */
    0xf0, 0xd2, 0x5a, 0x29, 0x15, 0x8d, 0x29, 0x18,

    /* U+0058 "X" */
    0x38, 0xa2, 0xd0, 0x84, 0xc0, 0xa4, 0x89, 0x82,

    /* U+0059 "Y" */
    0x42, 0x48, 0x91, 0x23, 0xe6, 0x86, 0x14, 0x70,

    /* U+005A "Z" */
    0x3f, 0x22, 0x4, 0x4, 0xf8, 0x95, 0xe3,

    /* U+005B "[" */
    0xea, 0xaa, 0xb0,

    /* U+005C "\\" */
    0x82, 0x4, 0x8, 0x20, 0x41, 0x2, 0x8, 0x10,

    /* U+005D "]" */
    0xd5, 0x55, 0x70,

    /* U+005E "^" */
    0x54,

    /* U+005F "_" */
    0xfc,

    /* U+0060 "`" */
    0xe0,

    /* U+0061 "a" */
    0x6a, 0xed,

    /* U+0062 "b" */
    0x4a, 0x3b, 0x70,

    /* U+0063 "c" */
    0xf2, 0x20,

    /* U+0064 "d" */
    0x11, 0x26, 0xaa, 0xd0,

    /* U+0065 "e" */
    0x77, 0x70,

    /* U+0066 "f" */
    0x8, 0x61, 0x88, 0x70, 0xe2, 0x8c, 0x20,

    /* U+0067 "g" */
    0x3c, 0x97, 0x6e,

    /* U+0068 "h" */
    0x42, 0x11, 0x65, 0x4a, 0x40,

    /* U+0069 "i" */
    0x41, 0x49, 0x80,

    /* U+006A "j" */
    0x2, 0x2, 0x32, 0x4c, 0xc0,

    /* U+006B "k" */
    0x4, 0x8a, 0xde, 0xa0,

    /* U+006C "l" */
    0x4a, 0x49, 0x50,

    /* U+006D "m" */
    0xb5, 0xfa, 0x55, 0x20,

    /* U+006E "n" */
    0x5, 0x95, 0x29, 0x0,

    /* U+006F "o" */
    0x6a, 0xae,

    /* U+0070 "p" */
    0x7, 0xd2, 0xa7, 0x20, 0x0,

    /* U+0071 "q" */
    0x36, 0xa5, 0xe2, 0x10, 0x0,

    /* U+0072 "r" */
    0x56, 0xa6,

    /* U+0073 "s" */
    0x79, 0x6e,

    /* U+0074 "t" */
    0x5, 0x24, 0x80,

    /* U+0075 "u" */
    0x4a, 0xa5, 0x64, 0x0,

    /* U+0076 "v" */
    0x96, 0xe0,

    /* U+0077 "w" */
    0xf, 0x7b, 0x60,

    /* U+0078 "x" */
    0x49, 0x88, 0xa0,

    /* U+0079 "y" */
    0x8a, 0xbe, 0xcc,

    /* U+007A "z" */
    0x74, 0x8f,

    /* U+007B "{" */
    0x52, 0x49, 0x24, 0x88,

    /* U+007C "|" */
    0xff, 0xf8,

    /* U+007D "}" */
    0x1a, 0x5a, 0x40,

    /* U+007E "~" */
    0x5a,

    /* U+786E "确" */
    0x2, 0x1, 0x63, 0x70, 0x83, 0x43, 0x5d, 0x7d,
    0x56, 0x9d, 0x5, 0x41, 0x70,

    /* U+8BA4 "认" */
    0x8, 0x1, 0x20, 0x2, 0x3, 0x20, 0x72, 0x2,
    0x50, 0x34, 0x83, 0x86, 0x20, 0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 96, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 96, .box_w = 2, .box_h = 8, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 3, .adv_w = 96, .box_w = 3, .box_h = 4, .ofs_x = 2, .ofs_y = 6},
    {.bitmap_index = 5, .adv_w = 137, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 15, .adv_w = 80, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 21, .adv_w = 192, .box_w = 10, .box_h = 11, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 35, .adv_w = 137, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 43, .adv_w = 96, .box_w = 1, .box_h = 4, .ofs_x = 3, .ofs_y = 6},
    {.bitmap_index = 44, .adv_w = 51, .box_w = 2, .box_h = 11, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 47, .adv_w = 51, .box_w = 2, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 50, .adv_w = 84, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 53, .adv_w = 135, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 60, .adv_w = 96, .box_w = 2, .box_h = 2, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 61, .adv_w = 135, .box_w = 7, .box_h = 1, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 62, .adv_w = 96, .box_w = 2, .box_h = 1, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 63, .adv_w = 112, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 70, .adv_w = 96, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 75, .adv_w = 96, .box_w = 2, .box_h = 7, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 77, .adv_w = 96, .box_w = 4, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 81, .adv_w = 96, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 85, .adv_w = 96, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 91, .adv_w = 96, .box_w = 4, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 95, .adv_w = 96, .box_w = 4, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 99, .adv_w = 96, .box_w = 4, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 103, .adv_w = 96, .box_w = 4, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 107, .adv_w = 96, .box_w = 4, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 111, .adv_w = 96, .box_w = 2, .box_h = 3, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 112, .adv_w = 96, .box_w = 1, .box_h = 4, .ofs_x = 3, .ofs_y = -2},
    {.bitmap_index = 113, .adv_w = 146, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 121, .adv_w = 136, .box_w = 7, .box_h = 3, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 124, .adv_w = 148, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 132, .adv_w = 96, .box_w = 3, .box_h = 7, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 135, .adv_w = 188, .box_w = 11, .box_h = 12, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 152, .adv_w = 102, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 158, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 165, .adv_w = 117, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 172, .adv_w = 132, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 179, .adv_w = 120, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 186, .adv_w = 108, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 192, .adv_w = 115, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 200, .adv_w = 138, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 207, .adv_w = 78, .box_w = 4, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 211, .adv_w = 91, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 217, .adv_w = 111, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 224, .adv_w = 123, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 231, .adv_w = 174, .box_w = 11, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 242, .adv_w = 121, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 249, .adv_w = 119, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 256, .adv_w = 126, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 264, .adv_w = 121, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 272, .adv_w = 139, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 279, .adv_w = 118, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 286, .adv_w = 118, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 293, .adv_w = 146, .box_w = 8, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 300, .adv_w = 124, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 307, .adv_w = 152, .box_w = 9, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 315, .adv_w = 156, .box_w = 9, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 323, .adv_w = 121, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 331, .adv_w = 147, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 338, .adv_w = 53, .box_w = 2, .box_h = 10, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 341, .adv_w = 101, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 349, .adv_w = 53, .box_w = 2, .box_h = 10, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 352, .adv_w = 83, .box_w = 3, .box_h = 2, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 353, .adv_w = 96, .box_w = 6, .box_h = 1, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 354, .adv_w = 96, .box_w = 1, .box_h = 4, .ofs_x = 3, .ofs_y = 6},
    {.bitmap_index = 355, .adv_w = 70, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 357, .adv_w = 57, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 360, .adv_w = 65, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 362, .adv_w = 83, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 366, .adv_w = 63, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 368, .adv_w = 94, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 375, .adv_w = 75, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 378, .adv_w = 80, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 383, .adv_w = 47, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 386, .adv_w = 68, .box_w = 4, .box_h = 9, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 391, .adv_w = 77, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 395, .adv_w = 50, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 398, .adv_w = 118, .box_w = 7, .box_h = 4, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 402, .adv_w = 85, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 406, .adv_w = 67, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 408, .adv_w = 80, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 413, .adv_w = 78, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 418, .adv_w = 59, .box_w = 3, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 420, .adv_w = 66, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 422, .adv_w = 61, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 425, .adv_w = 88, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 429, .adv_w = 69, .box_w = 3, .box_h = 4, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 431, .adv_w = 101, .box_w = 5, .box_h = 4, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 434, .adv_w = 88, .box_w = 5, .box_h = 4, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 437, .adv_w = 77, .box_w = 4, .box_h = 6, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 440, .adv_w = 77, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 442, .adv_w = 65, .box_w = 3, .box_h = 10, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 446, .adv_w = 46, .box_w = 1, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 448, .adv_w = 65, .box_w = 2, .box_h = 10, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 451, .adv_w = 87, .box_w = 4, .box_h = 2, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 452, .adv_w = 192, .box_w = 10, .box_h = 10, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 465, .adv_w = 192, .box_w = 12, .box_h = 9, .ofs_x = 0, .ofs_y = -1}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint16_t unicode_list_1[] = {
    0x0, 0x1336
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 30830, .range_length = 4919, .glyph_id_start = 96,
        .unicode_list = unicode_list_1, .glyph_id_ofs_list = NULL, .list_length = 2, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
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
const lv_font_t ui_font_Font16 = {
#else
lv_font_t ui_font_Font16 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 14,          /*The maximum line height required by the font*/
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



#endif /*#if UI_FONT_FONT16*/

