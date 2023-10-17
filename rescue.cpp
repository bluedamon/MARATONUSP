#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(){
    long double d, L, v1, v2;
    cin >> d >> L >> v1 >> v2;
    long double distance = L - d;
    long double velRelative = v1 + v2;
    long double time = distance / velRelative;
    cout << setprecision(19) << time << endl;
    return 0;
}
// 2.66666666666666666674
// 2.66666666666666650000
