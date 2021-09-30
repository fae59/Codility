int solution(int A[], int B[], int N) {
    // write your code in C99 (gcc 6.2.0)
    if (N <= 1) return N;

    int cnt = 1;
    int prev_end = B[0];

    for (int i=0;i<N;i++)
    {
        if(A[i] > prev_end)
        {
            cnt++;
            prev_end = B[i];
        }
    }

    //printf("%d",cnt);

    return cnt;
}
