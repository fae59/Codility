int solution(int A[], int N) {
    // write your code in C99 (gcc 6.2.0)
    int max = A[0];
    int ant = A[0];

    for (int i=1;i<N;i++) {
        
        if ((ant + A[i]) > A[i]) {
            ant += A[i]; 
        } else {
            ant = A[i];
        }

        if (max < ant) {
            max = ant;
        }
    }

    return max;
}
