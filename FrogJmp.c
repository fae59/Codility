int solution(int X, int Y, int D) {
    // write your code in C99 (gcc 6.2.0)
    int dist = Y - X;
    int pulos = dist / D;
    int resto = dist % D;

    if (resto != 0 && resto < D) pulos++;

    return pulos;
}
