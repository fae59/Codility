struct Results solution(int A[], int N, int K) {
    struct Results result;
    // write your code in C99 (gcc 6.2.0)
    int* B = calloc(N, sizeof(int));
    int rotI = 0;

    for(int i=0;i<N;i++) {
        rotI = (i + K) % N;
        B[rotI] = A[i];
    }

    result.A = B;
    result.N = N;

    return result;
}
