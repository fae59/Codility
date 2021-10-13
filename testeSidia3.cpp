#include <string.h>
#include <math.h>

int solution(string S, int k) { 
	//string S{"SMS messages are really short"};
    	// write your code in C++14 (g++ 6.2.0)
    	const int N = S.size();
    	const int k = 12;
    	//int cnt = 0;
    
    	//for (int i=0;i<N;i+=k) {
        	//cout << "split=" << S.substr(i, k) << endl;
        	//cnt++;
    	//}
	
	return floor((float)N/k);
}
