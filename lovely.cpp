#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main(){
    long long int n; 
    cin >> n; //1000000000000
    long long int lovely = n; //1000000000000
    long long int i = 2;
    long double squareReal = sqrt(n);
    long long int squareInt = sqrt(n);
    long long int last = n;
    if(n == 1) cout << n;
    else{
        while(true){
            if(squareInt != squareReal) break;
            last = squareInt;
            squareReal = sqrt(squareInt);
            squareInt = sqrt(squareInt);
        }
        lovely = last;
        while(i <= lovely/2){
            if(lovely % (i*i) == 0){
            lovely = lovely/i; //250.000.000.000
            i = 2;
        } else i++; 
        }
        cout << lovely;
    }
    return 0;
}