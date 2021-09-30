int solution(int A[], int N) {
    // write your code in C99 (gcc 6.2.0)
    int valor = 0;
    int tam = 0;

    for(int i=0;i<N;i++) {
        if (tam == 0) {
            valor = A[i];
            tam++;
        }
        else {
            if (A[i] == valor) {
                tam++;
            }
            else {
                tam--;
            }
        }
    }

    int lider = valor;
    int lider_count = 0;

    for (int i=0;i<N;i++) {
        if (A[i] == lider) {
            lider_count++;
        }
    }

    int repet = 0;
    int equi = 0;

    for (int i=0;i<N;i++) {
        if (A[i] == lider) {
            repet++;
        }
        if ( (repet > (i+1)/2) && ((lider_count-repet) > (N-(i+1))/2) ) {
            equi++;
        }
    }

    return equi;
}
