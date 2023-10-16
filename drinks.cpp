#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
     int numberOfToastsWithLimon = (c * d) / n;
     int numberOfToastsWithSalt = p / (n * np);
     int numberOfRounds = (k * l) / (n * nl);
     int answer = numberOfToastsWithLimon;
     answer = min(answer, numberOfToastsWithSalt);
     answer = min(answer, numberOfRounds);
     cout << answer << endl;
     return 0;
}