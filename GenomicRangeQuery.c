int solution(int A, int B, int K) {
    // write your code in C99 (gcc 6.2.0)
    int* A;
    int size = 0;
    int min = 4;

    A = (int *) calloc(M,sizeof(int));

    for (int i=0;i<M;i++) {
        min = 4;
        for(int j=P[i];j<=Q[i];j++) {
            
            switch (S[j]) {
                case 'A':
                    size = 1;
                    break;

                case 'C':
                    size = 2;
                    break;

                case 'G':
                    size = 3;
                    break;

                default:
                case 'T':
                    size = 4;
                    break;
            }

            if (P[i]-Q[i] == 0) {
                min = size;
            }
            else if (size < min) {
                min = size;
            }
        }

        A[i] = min;
    }
/*
    for (int i=0;i<M;i++) {
        printf("A[%d]=%d ",i,A[i]);
    }
*/
    result.A = A;
    result.M = M;

    return result;
}
