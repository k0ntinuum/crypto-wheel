i64 pow_i64(i64 b, i64 e) {
    i64 s = 1;
    for (i64 i = 0; i < e; i++) s *= b;
	return s;
}