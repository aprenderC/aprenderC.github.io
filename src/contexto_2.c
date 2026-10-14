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


                br_repeat(5);

                with_tag(h3) { add_text("2.2 Quando usar cada? "); }
                with_tag(div, .css_class = "logo-box") {
                    with_tag(div, .css_class = "logo-box-text") {
                        current_text = read_file("text/2_quando_usar_cada.txt");
                        for (size_t i = 0; i < current_text.count; ++i) {
                            with_tag(p) { add_text(current_text.lines[i]); }
                        }
                    }
                    with_tag(div, .css_class = "logos_group") {
                        push_tag(img, .src = "../../images/c_logo.png", .width = "80px");
                        push_tag(img, .src = "../../images/aprender_c_pensando.png", .width = "150px");
                        push_tag(img, .src = "../../images/cpp_logo.png", .width = "80px");

                    }

                }

                    with_tag(div, .css_class = "logo-box") {
                        with_tag(div, .css_class = "logos_group") {

                        push_tag(img, .src = "../../images/fizzbuzz_c.png", .width = "450px");
                        push_tag(img, .src = "../../images/fizzbuzz_cpp_moderno.png", .width = "550px");
                        br();
                        add_text("Mesmo programa em C e C++ moderno (C++23)");
                        }
                    }

                    with_tag(h3) { add_text("Decompilação programa em C."); }
                    raw(

<iframe width="1000px" height="800px" src="https://godbolt.org/e?readOnly=true&hideEditorToolbars=true#g:!((g:!((g:!((h:codeEditor,i:(filename:'1',fontScale:14,fontUsePx:'0',j:1,lang:___c,selection:(endColumn:1,endLineNumber:24,positionColumn:1,positionLineNumber:24,selectionStartColumn:1,selectionStartLineNumber:24,startColumn:1,startLineNumber:24),source:'%23include+%3Cstdio.h%3E%0A%0A%0Aconst+char+*resolver_fizzbuzz(const+int+i)+%7B%0A++++if+(i+%25+15+%3D%3D+0)+return+%22FizzBuzz%22%3B%0A++++if+(i+%25+3+%3D%3D+0)+return+%22Fizz%22%3B%0A++++if+(i+%25+5+%3D%3D+0)+return+%22Buzz%22%3B%0A++++return+%22Invalido%22%3B%0A%7D%0A%0Aint+main(void)+%7B%0A%0A++++for(size_t+i+%3D+0%3B+i+%3C%3D+100%3B+%2B%2Bi)+%7B%0A%0A++++++++const+char+*resultado+%3D+resolver_fizzbuzz(i)%3B%0A++++++++printf(%22%25s%5Cn%22,+resultado)%3B%0A++++%7D%0A%0A++++return+0%3B%0A%7D%0A%0A%0A%0A'),l:'5',n:'0',o:'C+source+%231',t:'0')),k:46.7402967712174,l:'4',m:100,n:'0',o:'',s:0,t:'0'),(g:!((h:compiler,i:(compiler:cg161,filters:(b:'0',binary:'1',binaryObject:'1',commentOnly:'0',debugCalls:'1',demangle:'0',directives:'0',execute:'1',intel:'0',libraryCode:'0',trim:'1',verboseDemangling:'0'),flagsViewOpen:'1',fontScale:14,fontUsePx:'0',j:1,lang:___c,libs:!(),options:'',overrides:!(),selection:(endColumn:1,endLineNumber:1,positionColumn:1,positionLineNumber:1,selectionStartColumn:1,selectionStartLineNumber:1,startColumn:1,startLineNumber:1),source:1),l:'5',n:'0',o:'+x86-64+gcc+16.1+(Editor+%231)',t:'0')),header:(),k:53.259703228782605,l:'4',m:100,n:'0',o:'',s:0,t:'0')),l:'2',n:'0',o:'',t:'0')),version:4"></iframe>
                    );


                    with_tag(h3) { add_text("Decompilação programa em C++."); }

                    raw(

<iframe width="1000px" height="800px" src="https://godbolt.org/e?readOnly=true&hideEditorToolbars=true#g:!((g:!((g:!((h:codeEditor,i:(filename:'1',fontScale:14,fontUsePx:'0',j:1,lang:c%2B%2B,selection:(endColumn:2,endLineNumber:22,positionColumn:2,positionLineNumber:22,selectionStartColumn:2,selectionStartLineNumber:22,startColumn:2,startLineNumber:22),source:'%23include+%3Cprint%3E%0A%23include+%3Cstring%3E%0A%23include+%3Cvector%3E%0A%23include+%3Calgorithm%3E%0A%0Aauto+resolver_fizzbuzz(const+int+i)+-%3E+std::string+%7B%0A++++if+(i+%25+15+%3D%3D+0)+return+std::string(%22FizzBuzz%22)%3B%0A++++if+(i+%25+3+%3D%3D+0)+return+std::string(%22Fizz%22)%3B%0A++++if+(i+%25+5+%3D%3D+0)+return+std::string(%22Buzz%22)%3B%0A++++return+std::string(%22Invalido%22)%3B%0A%7D%0A%0Aauto+main()+-%3E+int+%7B%0A++++auto+numeros+%3D+std::vector%3Cint%3E(100)%3B%0A%0A++++std::generate(numeros.begin(),+numeros.end(),+%5Bn+%3D+1%5D()+mutable+-%3E+int+%7Breturn+n%2B%2B%3B%7D)%3B%0A%0A++++std::for_each(numeros.begin(),+numeros.end(),+%5B%5D(const+int+n)+-%3E+void+%7B%0A++++++++++++std::println(%22%7B%7D%22,+resolver_fizzbuzz(n))%3B%0A++++%7D)%3B%0A%0A%7D'),l:'5',n:'0',o:'C%2B%2B+source+%231',t:'0')),k:46.7402967712174,l:'4',m:100,n:'0',o:'',s:0,t:'0'),(g:!((h:compiler,i:(compiler:g162,filters:(b:'0',binary:'1',binaryObject:'1',commentOnly:'0',debugCalls:'1',demangle:'0',directives:'0',execute:'1',intel:'0',libraryCode:'0',trim:'1',verboseDemangling:'0'),flagsViewOpen:'1',fontScale:14,fontUsePx:'0',j:1,lang:c%2B%2B,libs:!(),options:'-std%3Dc%2B%2B23',overrides:!(),selection:(endColumn:1,endLineNumber:1,positionColumn:1,positionLineNumber:1,selectionStartColumn:1,selectionStartLineNumber:1,startColumn:1,startLineNumber:1),source:1),l:'5',n:'0',o:'+x86-64+gcc+16.2+(Editor+%231)',t:'0')),header:(),k:53.259703228782605,l:'4',m:100,n:'0',o:'',s:0,t:'0')),l:'2',n:'0',o:'',t:'0')),version:4"></iframe>
                );

            }
        }
    }

    c2html_end_file();
}
