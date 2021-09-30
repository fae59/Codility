#include <limits.h>
#include <math.h>

int solution(int N) {
    // write your code in C99 (gcc 6.2.0)
    long per = LONG_MAX;

    for(int i=1;i<=(int)sqrt(N);i++) {
        if(N % i == 0) {
            if (2*(i+(N/i)) < per) {
                per = 2*(i+(N/i));
            }
        }
    }

    return (int)per;
}
