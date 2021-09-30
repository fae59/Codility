int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int abs_diferente = 1;
    int atual = max(abs(A[0]), abs(A[-1]));
    int inicio = 0;
    int fim = A.size()-1;
    int anterior = 0;
    int ultimo = 0;

    while (inicio <= fim)
    {
        anterior = abs(A[inicio]);
        if(anterior == atual)
        {
            inicio++;
            continue;
        }
        ultimo = abs(A[fim]);
        if(ultimo == atual)
        {
            fim--;
            continue;
        }
        if(anterior >= ultimo)
        {
            atual = anterior;
        }
        else
        {
            atual = ultimo;
            fim--;
        }
        abs_diferente++;
    }
    return abs_diferente;
}

