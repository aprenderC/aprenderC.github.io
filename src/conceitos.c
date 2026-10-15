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

                with_tag(div, .css_class = "logo-box") {
                    with_tag(div, .css_class = "logo-box-text") {
                        with_tag(h4) { add_text("Ponteiros / Pointers"); }
                        current_text = read_file("text/conceitos_ponteiros.txt");
                        for (size_t i = 0; i < current_text.count; ++i) {
                            with_tag(p) { add_text(current_text.lines[i]); }
                        }
                    }
                }

                push_tag(img, .src = "../../images/exemplo_pointer.png", .width = "500px");

                with_tag(div, .css_class = "logo-box") {
                    with_tag(div, .css_class = "logo-box-text") {
                        with_tag(h4) { add_text("Null terminated strings / "); }
                        current_text = read_file("text/conceitos_null_terminated.txt");
                        for (size_t i = 0; i < current_text.count; ++i) {
                            with_tag(p) { add_text(current_text.lines[i]); }
                        }
                    }
                }

                push_tag(img, .src = "../../images/exemplo_null_terminated.png", .width = "500px");
                push_tag(img, .src = "../../images/exemplo_output_null_terminated.png", .width = "500px");
                add_text("Saida do programa mostrando null-terminated strings (\\0)");
            }

            with_tag(div, .css_class = "card") {

                with_tag(h3) { add_text("3. Principais compiladores e ferramentas para C."); }
                with_tag(div, .css_class = "logo-box") {
                    with_tag(div, .css_class = "logo-box-text") {
                        current_text = read_file("text/compiladores_intro.txt");
                        for (size_t i = 0; i < current_text.count; ++i) {
                            with_tag(p) { add_text(current_text.lines[i]); }
                        }
                    }
                    with_tag(div, .css_class = "logos_group") {
                        push_tag(img, .src = "../../images/aprender_c_pensando.png", .width = "100px");
                    }
                }

                with_tag(div, .css_class = "logo-box") {
                    with_tag(div, .css_class = "logo-box-text") {
                        with_tag(h4) { add_text("Processo de compilação"); }
                        current_text = read_file("text/processo_compilacao.txt");
                        for (size_t i = 0; i < current_text.count; ++i) {
                            with_tag(p) { add_text(current_text.lines[i]); }
                        }
                    }
                }

                with_tag(div, .css_class = "logo-box") {
                    with_tag(div, .css_class = "logo-box-text") {
                        with_tag(h4) { add_text("O que é assembly?"); }
                        current_text = read_file("text/o_que_e_assembly.txt");
                        for (size_t i = 0; i < current_text.count; ++i) {
                            with_tag(p) { add_text(current_text.lines[i]); }
                        }

                        push_tag(img, .src = "../../images/asm.gif", .width = "500px");

                        current_text = read_file("text/o_que_e_assembly_parte2.txt");
                        for (size_t i = 0; i < current_text.count; ++i) {
                            with_tag(p) { add_text(current_text.lines[i]); }
                        }
                    }
                }

                with_tag(div, .css_class = "logo-box") {
                    with_tag(div, .css_class = "logo-box-text") {
                        with_tag(h4) { add_text("Compiladores."); }
                        current_text = read_file("text/compiladores_header.txt");
                        for (size_t i = 0; i < current_text.count; ++i) {
                            with_tag(p) { add_text(current_text.lines[i]); }
                        }
                        /*GCC*/
                        with_tag(div, .css_class = "logo-box") {
                            with_tag(div, .css_class = "logo-box-text") {
                                with_tag(h4) { add_text("GCC - Gnu Compiler Collection"); }
                                with_tag(h5) { add_text("Sistemas suportados: Windows, POSIX(Linux, MacOs, BSDs), Embarcados(Embedded)"); }
                                current_text = read_file("text/compiladores_gcc.txt");
                                for (size_t i = 0; i < current_text.count; ++i) {
                                    with_tag(p) { add_text(current_text.lines[i]); }
                                }
                            }
                            with_tag(div, .css_class = "logos_group") {
                                push_tag(img, .src = "../../images/gcc_logo.png", .width = "150px");
                            }
                        }
                        /* CLANG */
                        with_tag(div, .css_class = "logo-box") {
                            with_tag(div, .css_class = "logo-box-text") {
                                with_tag(h4) { add_text("Clang - llvm/Clang"); }
                                with_tag(h5) { add_text("Sistemas suportados: Windows, POSIX(Linux, MacOs, BSDs), Embarcados(Embedded)(limitado)"); }
                                current_text = read_file("text/compiladores_clang.txt");
                                for (size_t i = 0; i < current_text.count; ++i) {
                                    with_tag(p) { add_text(current_text.lines[i]); }
                                }
                            }
                            with_tag(div, .css_class = "logos_group") {
                                push_tag(img, .src = "../../images/llvm_logo.png", .width = "150px");
                            }
                        }
                        /* MSVC */
                        with_tag(div, .css_class = "logo-box") {
                            with_tag(div, .css_class = "logo-box-text") {
                                with_tag(h4) { add_text("msvc - Microsoft visual C++ - cl.exe"); }
                                with_tag(h5) { add_text("Sistemas suportados: Windows"); }
                                current_text = read_file("text/compiladores_msvc.txt");
                                for (size_t i = 0; i < current_text.count; ++i) {
                                    with_tag(p) { add_text(current_text.lines[i]); }
                                }
                            }
                            with_tag(div, .css_class = "logos_group") {
                                push_tag(img, .src = "../../images/msvc_logo.png", .width = "150px");
                            }
                        }
                    }
                }
            }
        }
    }
    c2html_end_file();
}
