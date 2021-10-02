#include <stack>

int solution(string &S) {
    // write your code in C++14 (g++ 6.2.0)
    if (S.empty())
        return 1;

    if (S.size() % 2)
        return 0;

    stack<char> pilha;

    for(char c : S) {
        switch (c) {
            case '}':
                if (pilha.empty() || pilha.top() != '{')
                    return 0;
                pilha.pop();
                break;

            case ']':
                if(pilha.empty() || pilha.top() != '[')
                    return 0;
                pilha.pop();
                break;

            case ')':
                if(pilha.empty() || pilha.top() != '(')
                    return 0;
                pilha.pop();
                break;

            default:
                pilha.push(c);
        }
    }

    return (pilha.empty() ? 1 : 0);
}
