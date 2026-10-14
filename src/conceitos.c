void make_conceitos_page(void) {

    c2html_init("content/conceitos/index.html",
                .css_path = "../../css/style.css",
                .js_path = "../../script/script.js",
                .title = "Conceitos de programação.");

    TextLines current_text;

    push_tag(button, .id = "sidebarToggle", .css_class = "toggle-btn", .on_click = "toggleSidebar()");

    add_text("☰");
    pop_tag(button);

    with_tag(div, .css_class = "layout-container") {
        render_sidebar();

        with_tag(div, .css_class = "content") {

            with_tag(div, .css_class = "title-align") {
                with_tag(h1, .css_class = "text-center") {
                    add_text("Aprender C");
                    br();
                    push_tag(img, .src = "../../images/aprender_c.png", .width = "250px");
                }
            }

            with_tag(p, .css_class = "text-center") {
                add_text("Atividade extensionista UNINTER");
            }

            with_tag(div, .css_class = "card") {

                with_tag(h3) { add_text("3. Conceitos de programação"); }
                with_tag(div, .css_class = "logo-box") {
                    with_tag(div, .css_class = "logo-box-text") {
                        with_tag(h4) { add_text("Variáveis"); }
                        current_text = read_file("text/conceitos_variavel.txt");
                        for (size_t i = 0; i < current_text.count; ++i) {
                            with_tag(p) { add_text(current_text.lines[i]); }
                        }
                    }
                    with_tag(div, .css_class = "logos_group") {
                        push_tag(img, .src = "../../images/variaveis.png", .width = "150px");
                    }
                }

                with_tag(div, .css_class = "logo-box") {
                    with_tag(div, .css_class = "logo-box-text") {
                        with_tag(h4) { add_text("Tipos de dados"); }
                        current_text = read_file("text/conceitos_dados.txt");
                        for (size_t i = 0; i < current_text.count; ++i) {
                            with_tag(p) { add_text(current_text.lines[i]); }
                        }
                    }
                    with_tag(div, .css_class = "logos_group") {
                        push_tag(img, .src = "../../images/data_types.png", .width = "150px");
                    }
                }

                with_tag(div, .css_class = "logo-box") {
                    with_tag(div, .css_class = "logo-box-text") {
                        with_tag(h4) { add_text("Operadores"); }
                        with_tag(p) {
                            with_tag(strong) { add_text("Eles podem ser divididos em 4 categorias:"); }
                        }
                        with_tag(p) { add_text("Matemáticos: [ + -  *  /  % ]"); }
                        with_tag(p) { add_text("Relacionais: [ == != > < >= <= ]"); }
                        with_tag(p) { add_text("Lógicos: [ && || ]"); }
                        with_tag(p) { add_text("Especificos da computação: [ >> << ]"); }
                    }
                    with_tag(div, .css_class = "logos_group") {
                        push_tag(img, .src = "../../images/operadores.png", .width = "150px");
                    }
                }

                with_tag(div, .css_class = "logo-box") {
                    with_tag(div, .css_class = "logo-box-text") {
                        with_tag(h4) { add_text("Estruturas de controle"); }
                        current_text = read_file("text/conceitos_controlflow.txt");
                        for (size_t i = 0; i < current_text.count; ++i) {
                            with_tag(p) { add_text(current_text.lines[i]); }
                        }
                    }
                    with_tag(div, .css_class = "logos_group") {
                        push_tag(img, .src = "../../images/controlflow.png", .width = "150px");
                    }
                }

                br_repeat(5);

                with_tag(h3) { add_text("3.1 Conceitos de programação específicos a linguagem C"); }
                with_tag(div, .css_class = "logo-box") {
                    with_tag(div, .css_class = "logo-box-text") {
                        current_text = read_file("text/conceitos_c.txt");
                        for (size_t i = 0; i < current_text.count; ++i) {
                            with_tag(p) { add_text(current_text.lines[i]); }
                        }
                    }
                    with_tag(div, .css_class = "logos_group") {
                        push_tag(img, .src = "../../images/c_logo.png", .width = "80px");
                    }
                }

                with_tag(div, .css_class = "logo-box") {
                    with_tag(div, .css_class = "logo-box-text") {
                        with_tag(h4) { add_text("struct"); }
                        current_text = read_file("text/conceitos_struct.txt");
                        for (size_t i = 0; i < current_text.count; ++i) {
                            with_tag(p) { add_text(current_text.lines[i]); }
                        }
                    }
                }

                push_tag(img, .src = "../../images/exemplo_structs.png", .width = "500px");
            }

            br_repeat(5);

            with_tag(h3) { add_text("1.3 Onde C é usado? É relevante atualmente?"); }
            with_tag(div, .css_class = "logo-box") {
                with_tag(div, .css_class = "logo-box-text") {
                    current_text = read_file("text/onde_c_eh_usado.txt");
                    for (size_t i = 0; i < current_text.count; ++i) {
                        with_tag(p) { add_text(current_text.lines[i]); }
                    }
                }
                with_tag(div, .css_class = "logos_group") {
                    push_tag(img, .src = "../../images/tux.webp", .width = "100px");
                    push_tag(img, .src = "../../images/win10_logo.webp", .width = "100px");
                    push_tag(img, .src = "../../images/macos_logo.webp", .width = "100px");
                }
            }
        }
    }
    c2html_end_file();
}
