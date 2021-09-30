int max(int x, int y) {
    return (x > y ? x : y);
}

int solution(int A[], int N) {
    // write your code in C99 (gcc 6.2.0)
    int* max_to = calloc(N, sizeof(int));
    int* max_from = calloc(N, sizeof(int));
    int result = 0;

    for(int i=1;i<N-1;i++) {
        max_to[i] = max(0, A[i]+max_to[i-1]);
    }

    for(int i=N-2;i>0;i--) {
        max_from[i] = max(0, A[i]+max_from[i+1]);
    }

    for(int i=2;i<N;i++) {
        result = max(result,max_to[i-2]+max_from[i]);
    }

    return result;
}
