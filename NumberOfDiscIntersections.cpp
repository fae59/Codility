#include <algorithm>

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    const int N = A.size();
    const int intercMax = 10000000;
    vector<int> inicio(N,0), fim(N,0);
    
    for (int i=0;i<N;i++) {
        inicio[max(0, i - A[i])]++;
        fim[min(N-1, i+A[i])]++;
    }

    int ativo = 0;
    int inter = 0;

    for (int i=0;i<N;i++) {
        inter += ativo * inicio[i] + (inicio[i] * (inicio[i] - 1)) / 2;
        
        if (inter > intercMax) {
            return -1;
        }
            
        ativo += inicio[i] - fim[i];
    }

    return inter;
}
