int solution(int A[], int N) {
    // write your code in C99 (gcc 6.2.0)
    double min_idx = 0;
    double min_value = 100001;

    for (int idx=0;idx<N;idx++) {
        if (((A[idx] + A[idx+1]) / 2.0) < min_value) {
            min_idx = idx;
            min_value = (A[idx] + A[idx+1]) / 2.0;
        }

        if(idx<(N-2) && (((A[idx] + A[idx+1] + A[idx+2]) / 3.0) < min_value)) {
            min_idx = idx;
            min_value = (A[idx] + A[idx+1] + A[idx+2]) / 3.0;
        }
    }
    
    return min_idx;
}
