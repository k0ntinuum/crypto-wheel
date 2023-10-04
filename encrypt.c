void encrypt_with(i64 c[T], i64 p[T], machine* m) {
    
    for (i64 i = 0 ; i < m->r; i++) {
        for (i64 j = 0; j < i*T; j++ ) spin(m);
        reset(m);
        encode(c,p,m->x,m->k);
        reverse(c);
        copy_i64_vec(p,c,T);
    }
}

void decrypt_with(i64 d[T], i64 c[T], machine* m) {
    
    for (i64 i = m-> r - 1 ; i >= 0;  i-- ) {
        for (i64 j = 0; j < i*T; j++ ) spin(m);
        reverse(c);
        reset(m);
        decode(d,c,m->x,m->k);
        copy_i64_vec(c,d,T);
    }
}
