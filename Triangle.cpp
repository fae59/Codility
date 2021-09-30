#include <bits/stdc++.h>
int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    const int N = A.size();

    if (N < 3) {
        return 0;
    }

    sort(A.begin(), A.end());

    for (int i=0;i<N-2;i++) {
        if (A[i] + A[i+1] > A[i+2]) {
            return 1;
        }
    }

    return 0;
}
