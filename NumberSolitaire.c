int solution(int A[], int N) {
    // write your code in C99 (gcc 6.2.0)
    int* B;

    if (N == 2) {
        return A[0] + A[1];
    }

    B = (int *) calloc(N,sizeof(int));
    
    B[0] = A[0];
    
    for (int i=1;i<N;i++) {

        for (int j=1;j<=6;j++) {
            if(j > i){
                break;
            }

            if( B[i] < (A[i] + B[i-j]) ) {
                B[i] = A[i] + B[i-j];
            }
        } 
    }

    return B[N-1];
}
