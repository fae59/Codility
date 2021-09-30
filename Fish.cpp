#include <stack>
int solution(vector<int> &A, vector<int> &B) {
    // write your code in C++14 (g++ 6.2.0)
    const int N = A.size();
    if (N == 1) {
        return 1;
    }
    int vivo = N;
    stack<int> fish;
    for (int i=0;i<N;i++) {
        if (B[i] == 1) {
            fish.push(i);
        }
        else if (B[i] == 0 && !fish.empty()) {
            while (!fish.empty() && A[fish.top()] < A[i]) {
                fish.pop();
                vivo--;
            }
            if (!fish.empty() && A[fish.top()] > A[i]) {
                vivo--;
            }
        }
    }
    return vivo;
}
