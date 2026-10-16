void make_programa_page(void) {

    c2html_init("content/programa_minimo/index.html",
                .css_path = "../../css/style.css",
                .js_path = "../../script/script.js",
                .title = "Programa minimo em C");

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

                with_tag(h3) { add_text("4. Programa minimo em C"); }
                with_tag(div, .css_class = "logo-box") {
                    with_tag(div, .css_class = "logo-box-text") {
                        with_tag(p) { add_text("Um programa minimo em C se da com main() sendo definido como uma função vazia"); }
                    }
                    with_tag(div, .css_class = "logos_group") {
                        push_tag(img, .src = "../../images/programa_minimo.png", .width = "450px");
                    }
                }

                br_repeat(5);

                with_tag(h3) { add_text("4.1 Hello, World!"); }
                with_tag(div, .css_class = "logo-box") {
                    with_tag(div, .css_class = "logo-box-text") {
                        current_text = read_file("text/hello_world.txt");
                        for (size_t i = 0; i < current_text.count; ++i) {
                            with_tag(p) { add_text(current_text.lines[i]); }
                        }
                    }
                    with_tag(div, .css_class = "logos_group") {
                        push_tag(img, .src = "../../images/hello_world_papel.png", .width = "500px");
                        br();
                        add_text("Hello, world escrito em um papel por Brian Kernighan em 1978");
                    }
                }

                br_repeat(5);

                with_tag(h3) { add_text("4.2 Entendendo o programa linha por linha"); }

                push_tag(img, .src = "../../images/hello_world_codigo.png", .width = "500px");

                with_tag(div, .css_class = "logo-box") {
                    with_tag(div, .css_class = "logo-box-text") {

                        with_tag(div, .css_class = "code-box") {
                            with_tag(span, .css_class = "PreProc") { add_text("#include "); }
                            with_tag(span, .css_class = "String") { add_text("<stdio.h>"); }
                        }

                        with_tag(p) {
                            add_text("Linhas que começam com #, são chamadas de ");
                            with_tag(strong) { add_text("diretivos de pre-processamento."); }
                        }
                        with_tag(p) {
                            add_text("O diretivo \"include\", diz para o compilador ");
                            with_tag(strong) { add_text("copiar o conteúdo do arquivo onde a linha esta inserida."); }
                        }
                        with_tag(p) { add_text("Nesse caso, ele esta incluindo a biblioteca stdio (standart input/output), qual define funções que iremos utilizar depois."); }

                        with_tag(div, .css_class = "code-box") {
                            raw(
                                    <span class="Type">int</span><span> main&#40;</span><span class="Type">void</span><span>&#41;</span><span> &#123;</span>
                            );

                        }

                        with_tag(p) {
                                add_text("Aqui definimos a função principal, o ENTRY POINT de nosso programa, indicamos que ele não toma argumentos, e abrimos um bloco {} que define o corpo da função.");
                        }

                        with_tag(div, .css_class = "code-box") {
                            raw(<span>printf&#40;</span><span class="String">&quot;Hello&#44; World!</span><span class="Special">\\n</span><span class="String">&quot;</span>&#41;;);
                        }

                        with_tag(p) { add_text("Aqui, chamamos a função printf, que foi incluida por stdio.h, ela aceita um argumento de texto, no qual passamos Hello, World!\\n"); }
                        with_tag(p) { add_text("O escape sequence \\n, indica que essa sequencia de caracteres deve ser substituida por um \"newline\""); }

                        with_tag(div, .css_class = "code-box") {
                            with_tag(span, .css_class = "Statement") { add_text_unescaped("&nbsp;    return "); };
                            with_tag(span, .css_class = "Constant") { add_text("0"); }
                            add_text(";");
                            br();
                            add_text("}");
                        }

                        with_tag(p) { add_text("Aqui indicamos que o programa terminou de forma corretam indicado pela função main retornando 0."); }
                        with_tag(p) { add_text("Na maioria dos sistemas operacionais o RETURN_SUCESS é 0. Todo código de saida que não é 0 pode representar um erro diferente."); }

                    }
                }
            }
        }
    }

    c2html_end_file();
}
