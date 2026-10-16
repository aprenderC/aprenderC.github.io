#ifndef MENU_H
#define MENU_H

typedef struct {
    const char *text;
    const char *href;
} MenuItem;

MenuItem menu_items[] = {
    { "Inicio", "/index.html" },
    { "1. Introdução", "/content/intro_cs" },
    { "2. Sobre C", "/content/sobre_c" },
    { "3. Conceitos de programação", "/content/conceitos" },
    { "4. Programa minimo em C", "/content/programa_minimo" },
};

const int menu_count = sizeof(menu_items) / sizeof(menu_items[0]);

static inline void render_sidebar(void) {
    with_tag(nav, .id = "sidebar", .css_class = "sidebar collapsed") {
        with_tag(div, .css_class = "sidebar-header") {
            with_tag(h2) { add_text("Menu"); }
        }
        
        with_tag(ul, .css_class = "menu-list") {
            for(int i = 0; i < menu_count; ++i) {
                with_tag(li, .css_class = "menu-item") {
                    with_tag(a, .href = menu_items[i].href, .CUSTOM_ATTR(target = "_self")) {
                        add_text(menu_items[i].text);
                    }
                }
            }
        }
    }
}

#endif // MENU_H
