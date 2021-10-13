#include <string.h>
#include <math.h>
#include <bits/stdc++.h>
int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    //const string S = {"00:01:07,400-234-090\n00:05:01,701-080-080\n00:05:00,400-234-090"};
    const int N = S.size();
    const int num_calls = floor(N/20);
    int k = 0;
    vector<int> calls_dur_hor(num_calls, 0);
    vector<int> calls_dur_min(num_calls, 0);
    vector<int> calls_dur_seg(num_calls, 0);
    vector<int> pay(num_calls, 0);


    for (long i=0;i<N;i++) {
        if (S[i+2] == ':' && S[i+5] == ':' && S[i+9] != '0') {
            calls_dur_hor[k] = (S[i]-'0')*10 + (S[i+1]-'0');
            calls_dur_min[k] = (calls_dur_hor[k] * 60) + ((S[I+3]-'0')*10 + S[i+4]-'0'); 
            calls_dur_seg[k] = (S[i+6]-'0')*10 + (S[i+7]-'0');
            //cout << calls_dur_min[k] << ":" << calls_dur_seg[k] << endl;
            k++;
        }
    }

    for (int i=0;i<k;i++) {
        if (calls_dur_min[i] < 5) {
            pay[i] = ((calls_dur_min[i] * 60) + calls_dur_seg[i]) * 3;
        }
        else if (calls_dur_min[i] >= 5) {
            if (calls_dur_seg[i] == 0) {
                pay[i] = calls_dur_min[i] * 150;
            }
            else {
                pay[i] = (calls_dur_min[i] + 1) * 150;
            }
        }
    }

    sort(pay.begin(),pay.end());

    return pay[pay.size()-1];
}
