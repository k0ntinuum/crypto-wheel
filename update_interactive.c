
void update_key(machine* m) {
    //cls();
    const i64 key_row = 0;
    const i64 key_col = 0;
    cursor_to(key_row, key_col);
    printf("k  = ");
    print_i64_vec(m->_k,K);
    cursor_to(key_row+1, key_col);
    printf("x  = ");
    print_i64_vec(m->_x,X);
}

void update_example(machine* m, i64 _p[T]) {
    const i64 text_row = 2;
    const i64 text_col = 0;
    i64 p[T] = {0};
    i64 c[T] = {0};
    i64 d[T] = {0};
    copy_i64_vec(p,_p,T);
    cursor_to(text_row + 1,text_col);
    printf("p  = ");
    print_i64_vec(p,T);
    cursor_to(text_row + 2,text_col);
    encrypt_with(c,p,m);
    printf("c  = ");
    print_i64_vec(c,T);
    decrypt_with(d,c,m);
    cursor_to(text_row + 3,text_col);
    printf("d  = ");
    print_i64_vec(d,T);
    printf("\n");
}

void update_rounds(machine* m, i64 _p[T]) {
    const i64 rounds_row = 7;
    const i64 rounds_col = 0;
    i64 p[T] = {0};
    i64 c[T] = {0};
    i64 d[T] = {0};
    copy_i64_vec(p,_p,T);
    for (i64 i = 0 ; i < m->r; i++) {
        for (i64 j = 0; j < i*T; j++ ) spin(m);
        reset(m);
        encode(c,p,m->x,m->k);
        reverse(c);
        copy_i64_vec(p,c,T);
        cursor_to(rounds_row + i,rounds_col);
        printf("%02d = ",i);
        print_i64_vec(c,T);
    }

}