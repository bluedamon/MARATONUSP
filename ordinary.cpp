#include <iostream>
#include <string>
using namespace std;

int main(){
    int t;
    cin >> t;
    bool ordinary = true;
    while(t--){
        string n;
        cin >> n;
        int numberOfDigits = n.length();
        bool ordinary = true;
        int conditional = numberOfDigits;
        if(numberOfDigits > 1){
            while(conditional--){
                if(n[conditional] != n[0]){
                    ordinary = false;
                    break;
                }
            }
            int firstDigit = n[0] - '0';
            if(ordinary) cout <<(numberOfDigits - 1) * 9 + firstDigit << endl;  
            else {
                int ordinaryNumber = firstDigit;
                int interator = 10;
                int conditional = numberOfDigits;
                while(conditional-- > 1){
                    ordinaryNumber = ordinaryNumber + firstDigit * interator;
                    interator *= 10;
                }
                if(stoi(n) < ordinaryNumber) cout << (numberOfDigits - 1) * 9 + firstDigit - 1<< endl;
                else cout << (numberOfDigits - 1) * 9 + firstDigit << endl;
            }
        } 
        else cout << n << endl;
    }
    return 0;
}
//111 //19
            //99 // 18
            //10 // 9
            //11 // 10
            //12 // 10
            //101 // 18
            //222 //20