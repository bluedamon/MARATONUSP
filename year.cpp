#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    string year;
    cin >> year;
    int yr = stoi(year) + 1;
    while(true){
        string digits = to_string(yr);
        vector<int> arr;
        vector<int>::iterator ip;
        arr.push_back(digits[0] - '0');
        arr.push_back(digits[1] - '0');
        arr.push_back(digits[2] - '0');
        arr.push_back(digits[3] - '0');
        sort(arr.begin(), arr.end());
        ip = unique(arr.begin(), arr.end());
        arr.resize(distance(arr.begin(), ip));
        if(arr.size() == 4) break;
        yr++;
    }
    cout << yr;
    return 0;
}