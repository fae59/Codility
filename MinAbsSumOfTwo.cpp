#include <climits>
#include <bits/stdc++.h>

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    const int N = A.size();
    int minAbs = INT_MAX;
    int i=0, j=N-1;

    sort(A.begin(), A.end());

    while (i <= j) {
        int tmp = A[i] + A[j];
        minAbs = min(minAbs, abs(tmp));
        if (tmp <= 0) i++;
        else j--;
    }

    return minAbs;
}
