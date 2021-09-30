#include <set>

vector<int> FibonacciArrayMax(int MaxNum) {
    if (MaxNum == 0)
        return vector<int>(1, 0);
    vector<int> fib(2, 0);
    fib[1] = 1;
    for (int i = 2; fib[fib.size()-1] + fib[fib.size() - 2] <= MaxNum; i++)
        fib.push_back(fib[i - 1] + fib[i - 2]);
    return fib;
}

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
   const int N = A.size();

    vector<int> fib = FibonacciArrayMax(N);

    set<int> positions;
    positions.insert(N);
    for (int jumps = 1; ; jumps++)
    {
        set<int> new_positions;
        for (int pos : positions)
        {
            for (int f : fib)
            {
                // return jumps if we reach to the start point
                if (pos - (f - 1) == 0)
                    return jumps;
                
                int prev_pos = pos - f;
                
                // we do not need to calculate bigger jumps.
                if (prev_pos < 0)
                    break;
                
                if (prev_pos < N && A[prev_pos])
                    new_positions.insert(prev_pos);
            }
        }
        if (new_positions.size() == 0)
            return -1;
        positions = new_positions;
    }
    
    return -1;
}
