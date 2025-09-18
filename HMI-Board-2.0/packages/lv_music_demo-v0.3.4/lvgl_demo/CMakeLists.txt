SET(SOURCES screens/ui_Screen1.c
    screens/ui_Screen2.c
    ui.c
    components/ui_comp_hook.c
    ui_helpers.c
    images/ui_img_01_png.c
    fonts/ui_font_Font2.c
    fonts/ui_font_Font1.c
    fonts/ui_font_Font3.c
    fonts/ui_font_Font4.c
    fonts/ui_font_Font5.c
    fonts/ui_font_Font6.c)

add_library(ui ${SOURCES})
