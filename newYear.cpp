#include <iostream>
#include <string>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    int timeLeft = 240;
    int i = 1;
    int qtd = 0;
    while(i <= n){
        timeLeft -= 5 * i;
        if(timeLeft >= k) qtd++;
        else break;
        i++;
    }
    cout << qtd;
    return 0;
}