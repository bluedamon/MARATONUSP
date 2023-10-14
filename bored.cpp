#include <iostream>
#include <string>
using namespace std;

int main(){
    int A, B;
    cin >> A >> B;
    int min = 0;
    if(A <= B) min = A;
    else min = B;
    int GCD = 1;
    int i = 1;
    while(i <= min){
        GCD *= i;
        i++;
    }
    cout << GCD;
    return 0;
}