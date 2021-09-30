int solution(int A[], int N) {
    // write your code in C99 (gcc 6.2.0)
    long esq_sum=0, dir_sum=0;
    long min_dif=0, comp_dif=0;

    if (N < 2)
        return 0;
    else if (N == 2)
        return abs(A[0] - A[1]);

    for (int i=1;i<N;i++) {
        dir_sum += A[i];
    }

    esq_sum = A[0];
    min_dif = abs(esq_sum - dir_sum);

    for (int i=1;i<N-1;i++) {
        dir_sum -= A[i];
        esq_sum += A[i];
        comp_dif = abs(esq_sum - dir_sum);

        if(min_dif > comp_dif)
            min_dif = comp_dif;
    }

    return min_dif;
}
