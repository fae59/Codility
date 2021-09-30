int solution(int M, vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int count = 0;
    const int max_count = 1'000'000'000;
    auto begin = A.begin();
    auto end = A.begin();
    vector<bool> visited(M + 1, false);
    
    while (end < A.end() && begin < A.end()) {

        if (visited[*end]) {
            visited[*begin] = false;
            begin++;
        }
        else {
            //calc count
            count += end - begin + 1;
            visited[*end] = true;
            if (end + 1 < A.end())
                end++;
            else
                begin++;
        }

        if (count > max_count)
            return max_count;
    }

    return min(count, max_count);
}
