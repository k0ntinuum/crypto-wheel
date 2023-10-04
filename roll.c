void roll(i64* y, i64* x, i64* k ) {
    i64 s = 0;
    for (i64 i = 0; i < X; i++) {
        s = 0;
        for (i64 j = 0 ; j < N; j++) s += pow_i64(S, j) * x[(i+j)%X];
        y[i] = k[s];
	}
}





