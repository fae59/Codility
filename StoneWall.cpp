#include <stack>
int solution(vector<int> &H) {
    // write your code in C++14 (g++ 6.2.0)
    //const int N = H.size();
    
    stack<int> st;
    int blocks = 0;

    for (int i : H) {
        while (!st.empty() && st.top() > i) {
            st.pop();
        }

        if (!st.empty() && st.top() == i) {
            continue;
        }

        blocks++;
        st.push(i);
    }

    return blocks;
}
