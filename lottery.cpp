#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int qtd = 0;
    while(n){
        if(n >= 100){
            int value = n / 100;
            qtd += value;
            n -= value * 100;
        } else {
            if(n >= 20){
                int value = n / 20;
                qtd += value;
                n -= value * 20;
            } else {
                if(n >= 10){
                    int value = n / 10;
                    qtd += value;
                    n -= value * 10;
                } else {
                    if(n >= 5){
                        int value = n / 5;
                        qtd += value;
                        n -= value * 5;
                    } else {
                        if(n >= 1){
                            int value = n;
                            qtd += value;
                            n -= value;
                        }
                    }
                }
            }
        }
    }
    cout << qtd;
    return 0;
}