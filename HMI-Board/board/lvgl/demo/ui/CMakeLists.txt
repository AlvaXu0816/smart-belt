SET(SOURCES screens/ui_Screen1.c
    screens/ui_Screen2.c
    ui.c
    components/ui_comp_hook.c
    ui_helpers.c
    images/ui_img_01_png.c
    fonts/ui_font_Font1.c
    fonts/ui_font_Font10.c
    fonts/ui_font_Font11.c
    fonts/ui_font_Font12.c
    fonts/ui_font_Font13.c
    fonts/ui_font_Font14.c
    fonts/ui_font_Font15.c
    fonts/ui_font_Font16.c
    fonts/ui_font_Font17.c
    fonts/ui_font_Font2.c
    fonts/ui_font_Font3.c
    fonts/ui_font_Font4.c
    fonts/ui_font_Font5.c
    fonts/ui_font_Font6.c
    fonts/ui_font_Font7.c
    fonts/ui_font_Font8.c
    fonts/ui_font_Font9.c)

add_library(ui ${SOURCES})
