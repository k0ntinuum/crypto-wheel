void print_i64(i64 i) {
    switch (i) {
        case 0 : printf("O");break;
        case 1 : printf("|");break;
        case 2 : printf("@");break;
        default : printf("X");break;
    }
}
    
    
void print_i64_vec(i64* v, i64 l) { 
    for (i64 i = 0 ; i < l ; i++) print_i64( v[i] );
    printf("\n");
}

void print_i64_vecs(i64* v, i64 l,i64* u, i64 m) { 
    for (i64 i = 0 ; i < l ; i++) print_i64( v[i] );
    printf(" ");
    for (i64 i = 0 ; i < m ; i++) print_i64( u[i] );
    printf("\n");
}
