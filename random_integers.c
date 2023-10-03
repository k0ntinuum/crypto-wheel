u64 random_u64() {
    return arc4random() % ((unsigned)RAND_MAX + 1);
}
i64 random_i64() {
    return arc4random() % ( (unsigned)RAND_MAX + 1);
}

void randomize_i64_vec(i64* v, i64 l ) {
    for (i64 i = 0 ; i < l ; i++) v[i] = random_i64()%S;
}