int solution(int A[], int N) {
    // write your code in C99 (gcc 6.2.0)
    long long len = N+1;
    long long sum = (len*(len+1))/2;
    
    for(int i=0; i<N; i++) {
        sum-=(long)A[i];
    }

    return sum;
}
