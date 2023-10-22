// #include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr;
    int countNegatives = 0;
    int all = n;
    while(n--){
        int num;
        cin >> num;
        if(num < 0) countNegatives++;
        arr.push_back(num);
    }
    sort(arr.begin(), arr.end());

    if(countNegatives % 2 == 0){
        int negatives = countNegatives - 3;
        if(countNegatives == 2) negatives = 1;
        cout << negatives << " ";
        int i = 0;
        while(i < negatives){
            cout << arr.at(i) << " ";
            i++;
        }
        cout << endl;
        int positives = arr.size() - negatives - 2;
        cout << positives << " ";
        int j = negatives + 1;
        while(j < arr.size()){
            arr.at(j) != 0 ? cout << arr.at(j) << " " : cout << "";
            j++;
        } //-3 -2 0 4 5
        cout << endl;        
        cout << arr.size() - negatives - positives << " ";
        cout << arr.at(countNegatives - 1) << " " << arr.at(countNegatives);
    } else{
        int negatives = countNegatives - 2;
        if(countNegatives == 1) negatives = 1;
        cout << negatives << " ";
        int i = 0;
        while(i < negatives){
            cout << arr.at(i) << " ";
            i++;
        }
        cout << endl;
        int positives = arr.size() - negatives - 1;
        cout << positives << " ";
        int j = negatives;
        while(j < arr.size()){
            arr.at(j) != 0 ? cout << arr.at(j) << " " : cout << "";
            j++;
        }
        cout << endl;        
        cout << 1 << " ";
        cout << arr.at(countNegatives);
    }
    return 0;
}
