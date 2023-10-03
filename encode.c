

void encode(i64 c[T], i64 p[T], i64 x[2][X], i64 k[K]) {
    //printf("\n\n");
    i64 t = 0;i64 s = 0;
    for (i64 i = 0 ; i < T ; i++ ) { 
        t = (i+1)%2;s = i%2;
        roll(x[t],x[s],k);
        //print_i64_vec(x[t],X);
        //print_i64_vecs(x[t],X, k, K);
        c[i] = (x[t][0] + p[i])%S;
        x[t][i%X] = (x[t][i%X] + p[i])%S;
        k[i%K] =(k[i%K] + p[i])%S;
    }
   // printf("\n\n");
}

void decode(i64 d[T], i64 c[T], i64 x[2][X], i64 k[K]) {
    //printf("\n\n");
    i64 t = 0;i64 s = 0;
    // for (i64 i = 0 ; i < T ; i++ ) {
    for (i64 i = 0 ; i < T ; i++ ) { 
        t = (i+1)%2;s = i%2;
        roll(x[t],x[s],k);
        //print_i64_vec(x[t],X);
        //print_i64_vecs(x[t],X, k, K);
        d[i] = (S - x[t][0] + c[i])%S;
        x[t][i%X] = (x[t][i%X] + d[i])%S;
        k[i%K] =(k[i%K] + d[i])%S;
    }
    //printf("\n\n");
}



