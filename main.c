i32 main(void) {
    machine m = {0};
    load(&m);
    print_i64_vecs(m._k,K,m.x[0],X);
    printf("\n");
    for (i64 i = 0; i < 40; i++ ) test(&m);
    //test_encode(10);
}