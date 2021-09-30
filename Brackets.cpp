#include <stack>
int solution(string &S) {
    // write your code in C++14 (g++ 6.2.0)

    if (S.empty()) {
        return 1;
    }

    if(S.size() % 2) {
        return 0;
    }

    stack<char> st;

    for (char c : S) {
        switch (c)
        {
            case '}':
                if (st.empty() || st.top() != '{')
                    return 0;
                st.pop();
                break;

            case ']':
                if (st.empty() || st.top() != '[')
                    return 0;
                st.pop();
                break;

            case ')':
                    if (st.empty() || st.top() != '(')
                        return 0;
                    st.pop();
                    break;

            default:
                st.push(c);
        }
    }

    return st.empty() ? 1 : 0;
}
