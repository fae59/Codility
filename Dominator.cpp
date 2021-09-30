#include <bits/stdc++.h>
int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    const int N = A.size();

    int cand = -1;
    int cand_count = 0;
    int cand_index = -1;

    for (int i=0;i<N;i++) {
        if (cand_count == 0) {
            cand = A[i];
            cand_index = i;
            cand_count++;
        }
        else {
            if (A[i] == cand) {
                cand_count++;
            } else {
                cand_count--;
            }
        }
    }

    int k = 0;

    for (int i : A) {
        if (i == cand) {
            k++;
        }
    }

    return (k <= N/2.0 ? -1 : cand_index);
}
