

void load(machine* m) {
    randomize_i64_vec(m->_k,K);
    randomize_i64_vec(m->_x,X);
    copy_i64_vec(m->k,m->_k,K);
    copy_i64_vec(m->x[0],m->_x,X);
    m->b = 0;
    m->r = R;
}
void reset(machine* m) {
    copy_i64_vec(m->k,m->_k,K);
    copy_i64_vec(m->x[0],m->_x,X);
    m->b = 0;
}
void spin(machine* m) {
    roll(m->x[!m->b],m->x[m->b], m->k);
    //print_i64_vecs(m->x[!m->b],X, m->x[m->b], X);
    //print_i64_vec(m->x[!m->b],X);
    m->b =  !m->b;
}

void _test(machine* m) {
    i64 p[T] = {0};
    i64 c[T] = {0};
    i64 d[T] = {0};
    randomize_i64_vec(p,T);
    reset(m);
    encode(c,p,m->x,m->k);
    reset(m);
    decode(d,c,m->x,m->k);
    print_i64_vec(p,T);
    print_i64_vec(c,T);
    print_i64_vec(d,T);
    printf("\n");
}
void test(machine* m) {
    i64 p[T] = {0};
    i64 c[T] = {0};
    i64 d[T] = {0};
    randomize_i64_vec(p,T);
    print_i64_vec(p,T);
    encrypt(c,p,m);
    print_i64_vec(c,T);
    decrypt(d,c,m);
    print_i64_vec(d,T);
    printf("\n");
}