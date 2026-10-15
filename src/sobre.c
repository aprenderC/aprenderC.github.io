void make_about_page(void) {

    c2html_init("content/sobre/index.html",
                .css_path = "../../css/style.css",
                .js_path = "../../script/script.js",
                .title = "aprenderC");

    TextLines current_text;

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
                    push_tag(img, .src = "../../images/aprender_c.png", .width = "250px");
                }
            }

            with_tag(p, .css_class = "text-center") {
                add_text("Atividade extensionista UNINTER");
            }

            with_tag(div, .css_class = "card") {
                with_tag(div, .css_class = "logo-box") {
                    with_tag(div, .css_class = "logo-box-text") {
                        with_tag(p) {
                            add_text("Desenvolvido utilizando a library c2html.");
                        }
                        with_tag(a, .href = "https://github.com/LeaoMartelo2/c2html", .CUSTOM_ATTR(target = '_blank')) {
                            add_text("LeaoMartelo2/c2html.");
                        }
                    }
                    with_tag(div, .css_class = "logos_group") {
                        push_tag(img, .src = "../../images/github1.png", .width = "150px");
                    }
                }
                /*

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
                */
                
                /*
                with_tag(div, .css_class = "logo-box") {
                    with_tag(div, .css_class = "logo-box-text") {
                        with_tag(h3) { add_text("Atribuições:"); }
                        current_text = read_file("sources.txt");
                        for (size_t i = 0; i < current_text.count; ++i) {
                            with_tag(p) { add_text(current_text.lines[i]); }
                        }
                    }
                    with_tag(div, .css_class = "logos_group") {
                        push_tag(img, .src = "../../images/data_types.png", .width = "150px");
                    }
                }
                */
            }
        }
    }

    c2html_end_file();
}
