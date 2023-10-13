#include <iostream>
#include <string>
#include<algorithm>
using namespace std;

const int MAX = 100;
int listOfNumbers[MAX];

int main(){
    for(int i = 0; i < MAX; i++) listOfNumbers[i] = 4;
    string input;
    cin >> input;
    int length = input.length();
    int count = 0;
    while(2*count < length){
        listOfNumbers[count] = input[2*count] - '0';
        count++;
    }
    sort(listOfNumbers, listOfNumbers+length);
    for(int i = 0; i < count-1; i++) cout << listOfNumbers[i] << "+";
    cout << listOfNumbers[count - 1];
    return 0;
}