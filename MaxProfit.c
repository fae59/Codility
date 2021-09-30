int solution(int A[], int N) {
    // write your code in C99 (gcc 6.2.0)
    int menorVal = A[0];
    int melhorVal = 0;

    for (int i=1;i<N;i++) {

        //printf("menorVal=%d melhorVal=%d\n",menorVal,melhorVal);

        if ((A[i]-menorVal) > melhorVal) {
            melhorVal = A[i] - menorVal;
        } 

        if (A[i] < menorVal) {
            menorVal = A[i];
        } 
    }

    return melhorVal;
}
