int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    vector<bool> B(1'000'000 + 1, false);

    for (int i : A) {
        if(i>0) {
            B[i] = true;
        }
    }

    for(int i=1;i<=1000000;i++) {
        if (B[i] == false) {
            return i;
        }
    }

    return 1;
}
