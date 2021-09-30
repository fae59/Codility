int max(int x, int y) {
    return (x > y ? x : y);
}

int solution(int N) {
    // write your code in C99 (gcc 6.2.0)
    int max_gap = 0;
    int current_gap = 0;
    int ant = 0;

    while (N > 0 && N%2 == 0) {
        N /= 2;
    }

    while (N > 0) {
        ant = N%2;
        if (ant == 0) {
            current_gap++;
        } else if (current_gap != 0) {
            max_gap = max(current_gap, max_gap);
            current_gap = 0;
        }
        N /= 2;
    }

    return max_gap;
}
