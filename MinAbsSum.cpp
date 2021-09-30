#include <cmath>
#include <numeric>

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    const int N = A.size();
    int M = 0;
    int result = 0;

    for (int i=0;i<N;i++) {
        A[i] = abs(A[i]);
        M = max(A[i], M);
    }

    int S = std::accumulate(A.begin(),A.end(),0);
    vector<int>count(M+1,0);

    for (int i=0;i<N;i++) {
        count[A[i]] += 1;
    }
        
    vector<int> dp(S+1,-1);
    dp[0] = 0;

    for (int a=1;a<M+1;a++) {
        if (count[a] > 0) {
            for (int j=0;j<S;j++) {
                if (dp[j] >= 0) {
                    dp[j] = count[a];
                }
                else if (j >= a && dp[j - a] > 0) {
                    dp[j] = dp[j - a] - 1;
                }
            }
        }
    }

    //for (auto s : dp)
        //printf("%d ", s);

    result = S;

    for (int i=0;i<floor(S/2+1);i++) {
        if (dp[i] >= 0)
            result = min(result,S-2*i);
    }
    return result;
}

