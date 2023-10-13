#include <iostream>
#include <string>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        int rest = a % b;
        rest == 0 ? cout << '0' << endl : cout << b - rest << endl;
    }
    return 0;
}