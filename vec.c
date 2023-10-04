void copy_i64_vec(i64* y,i64* x, i64 l) {
    for (i64 i = 0 ; i < l ; i++) y[i] = x[i];
}

void reverse(i64  w[T]) {
    i64 t[T];
    copy_i64_vec(t,w,T);
    for (i64 i = 0 ; i < T ; i++) w[i] = t[T - 1 - i];
}
void zero_out(i64  w[T]) {
    for (i64 i = 0 ; i < T ; i++) w[i] = 0;
}