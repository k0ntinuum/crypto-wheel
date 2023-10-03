void test_word_square_machine() {
    i64 _k[K] = {0};
    randomize_i64_vec(_k,K);
    i64 k[K] = {0}; 
    i64 _x[X] = {0};i64 x[2][X] = {0};
    i64 p[T] = {0};
    i64 c[T] = {0};
    i64 d[T] = {0};
    printf("\n\n");
    print_i64_vec(_k,K);
    printf("\n\n");
    randomize_i64_vec(_x,X);
    copy_i64_vec(k,_k,K);
    copy_i64_vec(x[0],_x,X);
    randomize_i64_vec(p,T);
    encode(c,p,x,k);
    copy_i64_vec(k,_k,K);
    copy_i64_vec(x[0],_x,X);
    decode(d,c,x,k);
    print_i64_vec(p,T);
    print_i64_vec(c,T);
    print_i64_vec(d,T);
}

void test_encode(i64 n ) {
  for (i64 i = 0 ; i < n ; i++)  {
    test_word_square_machine();
  }  
}