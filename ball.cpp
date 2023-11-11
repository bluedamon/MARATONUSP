#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#define FASTIO ios_bas::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);
using namespace std;

int main(){
    int n;
    cin >> n;
    int parcial = 1;
    int sum = 0;
    char first;
    cin >> first;
    n--;
    while(n--){
        char input;
        cin >> input;
        if(input == first){
            parcial++;
        } else{
            if(first == '>' && input == '<'){
                parcial = 0;
            } else{
                sum += parcial;
                parcial = 0;
                first = input;
            }
        }
    }
    if(parcial) cout << parcial << endl;
    else cout << sum << endl;
    return 0;
}