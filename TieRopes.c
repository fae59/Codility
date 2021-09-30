int solution(int K, int A[], int N) {
    // write your code in C99 (gcc 6.2.0)
    int tam = 0;
    int cnt = 0;

    for(int i=0;i<N;i++)
    {
        tam += A[i];
        if (tam >= K)
        {
            cnt++;
            tam = 0;
        }
    }

    return cnt;
}
