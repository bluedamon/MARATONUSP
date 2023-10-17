#include <iostream>
#include <string>
using namespace std;

int main(){
    int numberOfDays, qtd, price;
    cin >> numberOfDays >> qtd >> price;
    int minPrice = price;
    numberOfDays--;
    int total = price * qtd;
    while(numberOfDays--){
        cin >> qtd >> price;
        if(price > minPrice) total += minPrice * qtd;
        else{
            minPrice = price;
            total += minPrice * qtd;
        }
    }
    cout << total << endl;
    return 0;
}