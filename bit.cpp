#include<iostream>
using namespace std;

int main(){
    int numberOfStatements;
    cin >> numberOfStatements;
    int x = 0;
    string statement; 
    while(numberOfStatements--){
        cin >> statement;
        if(statement[1] == '+') x = x + 1;
        else x = x - 1;
    }
    cout << x << endl;
    return 0;
}