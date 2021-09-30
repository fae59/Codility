int gcd(int n, int m) {
    if (n%m == 0) {
        return m;
    }
    else {
        return gcd(m, n%m);
    }
}

int solution(int N, int M) {
    // write your code in C99 (gcc 6.2.0)
    return N / gcd(N, M);
}
