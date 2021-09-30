#include <bits/stdc++.h>
int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    const int N = A.size();
    int dif = 0;

    if(N == 0) {
        dif = 0;
    } 
    else {
        dif = 1;
        sort(A.begin(), A.end());

        for(int i=1;i<N;i++) 
        {
            if (A[i] == A[i-1]) {
                continue;
            } 
            else {
                dif++;
            }
        }
    }

    return dif;
}
