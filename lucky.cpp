#include <iostream>
#include <string>
using namespace std;

int main(){
    string input;
    cin >> input;
    int length = input.length();
    int count = 0;
    while(length--) if(input[length] == '4' || input[length] == '7') count++;
    count == 4 || count == 7 ? cout << "YES" : cout << "NO";
    return 0;
}