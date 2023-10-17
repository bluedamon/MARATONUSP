#include <iostream>
#include <string>
using namespace std;

int main(){
    long long int N, L, area;
    cin >> L >> N;
    area = (L - N + 1) * (L - N + 1) + N - 1;
    cout << area << endl;
    return 0;
}