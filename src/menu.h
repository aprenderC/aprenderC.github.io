#ifndef MENU_H
#define MENU_H

typedef struct {
    const char *text;
    const char *href;
} MenuItem;

static inline void render_sidebar(void) {
    MenuItem menu_items[] = {
        { "a", "a" },
        { "b", "b" },
    };
    int menu_count = sizeof(menu_items) / sizeof(menu_items[0]);

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
