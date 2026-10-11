#include "c2html.h"
#include "menu.h"
#include "svg_helper.h"

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
                    push_tag(img, .src = "images/aprender_c.png", .width = "200");
                }
            }

            with_tag(p, .css_class = "text-center") {
                add_text("Atividade extensionista UNINTER");
            }

            with_tag(div, .css_class = "card") {
                with_tag(h3) { add_text("Ciência da Computação"); }

                with_tag(div, .css_class = "logo-box") {

                    with_tag(div, .css_class = "logo-box-text") {
                        with_tag(p) {
                            add_text("Simples introdução a conceitos de ciência da computação, com foco em linguagem C.");
                        }
                    }

                    with_tag(div, .css_class = "logos-group") {
                        push_tag(img, .src = "images/aprender_c.png");
                    }
                }
            }

            with_tag(div, .css_class = "card") {
                with_tag(h3) { add_text("Contextos abordados"); }
                with_tag(div, .css_class = "logo-box") {
                    with_tag(div, .css_class = "logo-box-text") {
                        with_tag(p) {
                            add_text("Introdução a conceitos de ciência da computação.");
                        }
                        with_tag(p) {
                            add_text("O que é a linguagem C.");
                        }
                        with_tag(p) {
                            add_text("Por que C?");
                        }
                        with_tag(p) {
                            add_text("Onde C é usado? É relevante atualmente?");
                        }
                    }
                    with_tag(div, .css_class = "logos-group") {
                        push_tag(img, .src = "images/generic_computer.png");
                    }
                }

                with_tag(div, .css_class = "logo-box") {
                    with_tag(div, .css_class = "logo-box-text") {

                        with_tag(p) { add_text("C, a \"lingua franca\" da programação"); }
                        with_tag(p) { add_text("C vs C++"); }
                        with_tag(p) { add_text("Quando usar cada?"); }
                    }
                    with_tag(div, .css_class = "logos-group") {
                        push_tag(img, .src = "images/c_logo.png");
                        push_tag(img, .src = "images/cpp_logo.png");
                    }
                }

                with_tag(div, .css_class = "logo-box") {
                    with_tag(div, .css_class = "logo-box-text") {
                        with_tag(p) { add_text("Conceitos de programação."); }
                        with_tag(p) { add_text("Conceitos de programação especificos a linguagem C."); }
                        with_tag(p) { add_text("Principais compiladores e ferramentas para C."); }
                    }
                    with_tag(div, .css_class = "logos-group") {
                        render_gcc_logo();
                        render_llvm_logo();
                        render_msvc_logo();
                    }
                }

                with_tag(div, .css_class = "logo-box") {
                    with_tag(div, .css_class = "logo-box-text") {
                        with_tag(p) { add_text("Programa minimo em C."); }
                        with_tag(p) { add_text("\"Hello, World!\""); }
                        with_tag(p) { add_text("Entendendo o programa linha por linha."); }
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
                add_text("abra o menu lateral e selecione a categoria apontada por seu orientador.");
            }

            with_tag(div, .css_class = "title-align") {
                with_tag(div, .css_class = "logo-box") {
                    with_tag(div, .css_class = "logo-box-text") {
                        with_tag(p) { add_text("Sobre este projeto."); }
                    }
                    with_tag(div, .css_class = "logos-group") {
                        push_tag(img, .src = "images/aprender_c.png");
                    }
                }
            }
        }
    }

    c2html_end_file();
    return 0;
}
