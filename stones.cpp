#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;
    string input;
    cin >> input;
    char pred = input[0];
    char suc;
    int count = 0;
    for(int i = 1; i < n; i++){
        suc = input[i];
        if(suc == pred) count++;
        pred = suc;
    }
    cout << count;
    return 0;
}