int solution(int N) {
    // write your code in C99 (gcc 6.2.0)
    int factor = 0;

    for (int i=1;i<=N;i++) {
        if(N % i == 0) factor++;
    }

    return factor;
}
