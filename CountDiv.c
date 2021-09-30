int solution(int A, int B, int K) {
    // write your code in C99 (gcc 6.2.0)
  if(A == 0) 
  {
    return B/K + 1;
  } 
  else 
  {
    return B/K - (A - 1)/K;
  }
}
