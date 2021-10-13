#include <bits/stdc++.h>
int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    vector<int> T{2, -3, 3, 1, 10, 8, 2, 5, 13, -5, 3, -18};
    const int N = T.size();
    int k = 0;

    vector<int> winter(N/4, 0);
    vector<int> spring(N/4, 0);
    vector<int> summer(N/4, 0);
    vector<int> autumn(N/4, 0);

    for (int i=0;i<N/4;i++) {
        winter[i] = T[k++];
    }

    for (int i=0;i<N/4;i++) {
        spring[i] = T[k++];
    }

    for (int i=0;i<N/4;i++) {
        summer[i] = T[k++];
    }

    for (int i=0;i<N/4;i++) {
        autumn[i] = T[k++];
    }

    sort(winter.begin(), winter.end());
    sort(spring.begin(), spring.end());
    sort(summer.begin(), summer.end());
    sort(autumn.begin(), autumn.end());

    float avrWinter = winter[winter.size()-1] - winter[0];
    float avrSpring = spring[spring.size()-1] - spring[0];
    float avrSummer = summer[summer.size()-1] - summer[0];
    float avrAutumn = autumn[autumn.size()-1] - autumn[0];

    float maxVal = -1;

    maxVal = max(maxVal, avrWinter);
    maxVal = max(maxVal, avrSpring);
    maxVal = max(maxVal, avrSummer);
    maxVal = max(maxVal, avrAutumn);

    if (maxVal == avrWinter) printf("WINTER");
    else if (maxVal == avrSpring) printf("SPRING");
    else if (maxVal == avrSummer) printf("SUMMER");
    else if (maxVal == avrAutumn) printf("AUTUMN");
}
