#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;
    string input;
    cin >> input;
    int i = 0;
    char first = input[0];
    char last = input[n - 1];
    int sum = 0;
    int parcial = 0;
    bool onlyLeft = true;
    bool onlyRight = true;
    if(first == '>' && last == '<'){
        cout << 0 << endl;
        onlyLeft = false;
        onlyRight = false;
    }
    else{
        if(first == '<'){
            int i = 0;
            while(i < n){
                first = input[i];
                if(first == '<'){
                    parcial++;
                } else{
                    sum += parcial;
                    onlyLeft = false;
                    break;
                }
                i++;
            }
        }
        if(last == '>'){
            parcial = 0;
            int i = n;
            while(i){
                i--;
                last = input[i];
                if(last == '>'){
                    parcial++;
                } else{
                    sum += parcial;
                    onlyRight = false;
                    break;
                }
            }
        }      
    }
    if(onlyLeft || onlyRight) cout << parcial << endl;
    else if(sum != 0) cout << sum << endl;
    return 0;
}