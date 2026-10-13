void make_sobre_c_page(void) {

    c2html_init("content/sobre_c/index.html",
                .css_path = "../../css/style.css",
                .js_path = "../../script/script.js",
                .title = "Sobre C");

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

                with_tag(h3) { add_text("2. C, a \"língua franca\" da programação"); }
                with_tag(div, .css_class = "logo-box") {
                    with_tag(div, .css_class = "logo-box-text") {
                        current_text = read_file("text/2_lingua_franca.txt");
                        for (size_t i = 0; i < current_text.count; ++i) {
                            with_tag(p) { add_text(current_text.lines[i]); }
                        }
                    }
                    with_tag(div, .css_class = "logos_group") {
                        push_tag(img, .src = "../../images/data_types.png", .width = "150px");
                    }
                }

                br_repeat(5);

                with_tag(h3) { add_text("2.1 C vs C++"); }
                with_tag(div, .css_class = "logo-box") {
                    with_tag(div, .css_class = "logo-box-text") {
                        current_text = read_file("text/intro_cs_1.1.txt");
                        for (size_t i = 0; i < current_text.count; ++i) {
                            with_tag(p) { add_text(current_text.lines[i]); }
                        }
                    }
                    with_tag(div, .css_class = "logos_group") {
                        push_tag(img, .src = "../../images/c_logo.png", .width = "80px");
                        push_tag(img, .src = "../../images/divergencia.png", .width = "80px");
                        push_tag(img, .src = "../../images/cpp_logo.png", .width = "80px");
                    }
                }

                with_tag(div, .css_class = "logo-box") {
                    with_tag(div, .css_class = "logo-box-text") {
                        current_text = read_file("text/intro_cs_1.1.txt");
                        for (size_t i = 0; i < current_text.count; ++i) {
                            with_tag(p) { add_text(current_text.lines[i]); }
                        }
                    }
                    with_tag(div, .css_class = "logos_group") {
                    }
                }

                push_tag(img, .src = "../../images/k_and_r.webp", .width = "500px");
                add_text("Brian Kernighan e Dennis Ritchie");

                br_repeat(5);

                with_tag(div, .css_class = "logo-box") {
                    with_tag(div, .css_class = "logo-box-text") {
                        current_text = read_file("text/o_que_eh_c.txt");
                        for (size_t i = 0; i < current_text.count; ++i) {
                            with_tag(p) { add_text(current_text.lines[i]); }
                        }
                    }
                    with_tag(div, .css_class = "logos_group") {
                        push_tag(img, .src = "../../images/c_book.png", .width = "230px");
                    }
                }

                br_repeat(5);

                with_tag(h3) { add_text("1.2 Por que C?"); }
                with_tag(div, .css_class = "logo-box") {
                    with_tag(div, .css_class = "logo-box-text") {
                        current_text = read_file("text/por_que_c.txt");
                        for (size_t i = 0; i < current_text.count; ++i) {
                            with_tag(p) { add_text(current_text.lines[i]); }
                        }
                    }
                    with_tag(div, .css_class = "logos_group") {
                        push_tag(img, .src = "../../images/aprender_c_pensando.png", .width = "150px");
                    }
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
    }

    c2html_end_file();
}
