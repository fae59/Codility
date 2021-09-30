#include <bits/stdc++.h>

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    const int N = A.size();
    vector<int> B(A);
    int result = 0;
    int i = 0, j = 0, k = 0;

    sort(B.begin(), B.end());
    
    for(i=0;i<N-2;i++)
    {
        k = i + 2;

        for(j=i+1;j<N-1;j++)
        {
            while((k < N) && (B[i] + B[j] > B[k]))
            {
                k++;
            }
                
            result += k - j - 1;
        }
    }
 
    return result;
}
