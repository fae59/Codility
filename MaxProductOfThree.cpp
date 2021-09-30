#include <bits/stdc++.h>
int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    const int N = A.size();
    sort(A.begin(), A.end());
    return max(A[0]*A[1]*A[N-1], A[N-3]*A[N-2]*A[N-1]);
}
