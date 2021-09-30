int max(int x, int y) {
    return x > y ? x : y;
}

struct Results solution(int N, int A[], int M) {
    struct Results result;
    // write your code in C99 (gcc 6.2.0)
    int* B = calloc(N+1,sizeof(int));
    int maxVal = -1;

    for (int i=0;i<=N+1;i++) 
    {
        if(A[i] > N) 
        {
            for(int j=0;j<N+1;j++) {
                maxVal = max(maxVal, B[j]);
            }

            //printf("maxVal=%d",maxVal);

            for(int j=0;j<N+1;j++) {
                B[j] = maxVal;
            }
        }
        else 
        {
            B[A[i]-1]++;
        }
    }

    result.C = B;
    result.L = N;
    return result;
}
