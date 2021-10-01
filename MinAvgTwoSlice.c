int solution(int A[], int N) {
    // write your code in C99 (gcc 6.2.0)
    double minI = 0;
    double minVal = 100001;

    for (int i=0;i<N;i++) {
        if (((A[i] + A[i+1]) / 2.0) < minVal) {
            minI = i;
            minVal = (A[i] + A[i+1]) / 2.0;
        }

        if(idx<(N-2) && (((A[i] + A[i+1] + A[i+2]) / 3.0) < minVal)) {
            minI = i;
            minVal = (A[i] + A[i+1] + A[i+2]) / 3.0;
        }
    }
    
    return minI;
}
