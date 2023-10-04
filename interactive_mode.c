void interactive_mode() {
    hide_cursor();
    start_raw_mode();
    bool quit = false;
    i64 p[T] = {0};
    //randomize_i64_vec(p,T);
    machine m = {0};
    cls();
    load(&m);
   
    update_key(&m);
    update_example(&m,p);
    update_rounds(&m,p);
    while (!quit) {
        int c = getch();
        switch (c) {
            case 'k': randomize_i64_vec(m._k,K);update_key(&m);update_example(&m,p);update_rounds(&m,p);break;
            case 'x': randomize_i64_vec(m._x,X);update_key(&m);update_example(&m,p);update_rounds(&m,p);break;
            case 'p': randomize_i64_vec(p,T); update_example(&m,p);
                    update_rounds(&m,p);break;
            case 'q': quit = true;break;
            case 'r': update_rounds(&m,p);break;
            case 'z': zero_out(p);update_example(&m,p);break;
        }
    }
    stop_raw_mode();
    cls();
}