#include "c2html.h"
#include "menu.h"
#include "svg_helper.h"

#include "sobre.c"
#include "intro_cs.c"
#include "contexto_2.c"
#include "conceitos.c"
#include "programa_minimo.c"

int main(void) {

    c2html_init("index.html",
                .css_path = "css/style.css",
                .js_path = "script/script.js",
                .title = "aprenderC");

    push_tag(button, .id = "sidebarToggle", .css_class = "toggle-btn", .on_click = "toggleSidebar()");
    add_text("☰");
    pop_tag(button);

    with_tag(div, .css_class = "layout-container") {

        render_sidebar();

        with_tag(main, .css_class = "content") {

            with_tag(div, .css_class = "title-align") {
                with_tag(h1, .css_class = "text-center") {
                    add_text("Aprender C");
                    br();
                    push_tag(img, .src = "images/aprender_c.png", .width = "250px");
                }
            }

            with_tag(p, .css_class = "text-center") {
                add_text("Atividade extensionista UNINTER");
            }



            with_tag(div, .css_class = "card") {
                with_tag(h3) { add_text("Contextos abordados"); }
                with_tag(div, .css_class = "logo-box") {
                    with_tag(div, .css_class = "logo-box-text") {
                        with_tag(p) {
                            add_text("1. Introdução a conceitos de ciência da computação.");
                        }
                        with_tag(p) {
                            add_text("1.1. O que é a linguagem C.");
                        }
                        with_tag(p) {
                            add_text("1.2. Por que C?");
                        }
                        with_tag(p) {
                            add_text("1.3. Onde C é usado? É relevante atualmente?");
                        }
                    }
                    with_tag(div, .css_class = "logos_group") {
                        push_tag(img, .src = "images/generic_computer.png", .width = "150px");
                    }
                }

                with_tag(div, .css_class = "logo-box") {
                    with_tag(div, .css_class = "logo-box-text") {

                        with_tag(p) { add_text("2. C, a \"lingua franca\" da programação"); }
                        with_tag(p) { add_text("2.1. C vs C++"); }
                        with_tag(p) { add_text("2.2. Quando usar cada?"); }
                    }
                    with_tag(div, .css_class = "logos_group") {
                        push_tag(img, .src = "images/c_logo.png", .width = "80px");
                        push_tag(img, .src = "images/cpp_logo.png", .width = "80px");
                    }
                }

                with_tag(div, .css_class = "logo-box") {
                    with_tag(div, .css_class = "logo-box-text") {
                        with_tag(p) { add_text("3. Conceitos de programação."); }
                        with_tag(p) { add_text("3.1. Conceitos de programação especificos a linguagem C."); }
                        with_tag(p) { add_text("3.2. Principais compiladores e ferramentas para C."); }
                    }
                    with_tag(div, .css_class = "logos_group") {
                        push_tag(img, .src = "images/gcc_logo.png", .width = "80px");
                        push_tag(img, .src = "images/llvm_logo.png", .width = "80px");
                        push_tag(img, .src = "images/msvc_logo.png", .width = "80px");

                    }
                }

                with_tag(div, .css_class = "logo-box") {
                    with_tag(div, .css_class = "logo-box-text") {
                        with_tag(p) { add_text("4. Programa minimo em C."); }
                        with_tag(p) { add_text("4.1. \"Hello, World!\""); }
                        with_tag(p) { add_text("4.2. Entendendo o programa linha por linha."); }
                    }
                    with_tag(div, .css_class = "logos-group") {
                        push_tag(img, .src = "images/hello_world.png");
                    }
                }
            }

            with_tag(div, .css_class = "card") {
                with_tag(h1) {
                    add_text("Para iniciar:");
                    br();
                }
                add_text("Abra o menu lateral e selecione a categoria apontada por seu orientador.");
            }

            with_tag(div, .css_class = "title-align") {
                with_tag(div, .css_class = "logo-box") {
                    with_tag(div, .css_class = "logo-box-text") {
                        with_tag(p) { add_text_unescaped("Sobre este projeto &#9660;"); }
                    }
                    with_tag(div, .css_class = "logos_group") {
                        push_tag(img, .src = "images/aprender_c.png", .width = "150px");
                    }
                }
            }
        }
    }

    c2html_end_file();
 
    make_about_page();
    
    make_intro_cs_page();
    make_sobre_c_page();
    make_conceitos_page();
    make_programa_page();


    return 0;
}
