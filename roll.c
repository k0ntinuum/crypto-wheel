// i64 forward_mod(i64 i , i64 m) {
//     while (m <= x) x -= m;
//     return m;
// }
i64 pow_i64(i64 b, i64 e) {
    i64 s = 1;
    for (i64 i = 0; i < e; i++) s *= b;
	return s;
}

void roll(i64* y, i64* x, i64* k ) {
    i64 s = 0;
    for (i64 i = 0; i < X; i++) {
        s = 0;
        for (i64 j = 0 ; j < N; j++) s += pow_i64(S, j) * x[(i+j)%X];
        y[i] = k[s];
	}
}
void roll_x_with_k(i64* x,i64* k) {
    i64 z[X] = {0};
    roll(z,x,k);
    copy_i64_vec(x,z,X);
}






