#include <iostream>
#include <string>
using namespace std;

const int MAX = 100;
int numbers[MAX];

int main(){
    int t;
    cin >> t;
    while(t--){
        int number;
        cin >> number;
        if(number == 2) cout << 1 << " " << number - 1 << endl;
        else
            if(number != 2 && number % 2 == 0) cout << 2 << " " << number - 2 << endl;
        else {
            cout << 1 << " " << number - 1 << endl;
        }
    }
    return 0;
}