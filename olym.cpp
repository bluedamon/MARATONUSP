#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr1;
    vector<int> arr2;
    vector<int> arr3;
    int n, t;
    cin >> n;
    int countT1 = 0;
    int countT2 = 0;
    int countT3 = 0;
    n--;
    cin >> t;
    if(t == 1){
        arr1.push_back(1 + countT1 + countT2 + countT3);
        countT1++;
    }
    else{
        if(t == 2){
            arr2.push_back(1 + countT1 + countT2 + countT3);
            countT2++;
        } else{
            arr3.push_back(1 + countT1 + countT2 + countT3);
            countT3++;
        } 
    }
    while(n--){
        cin >> t;
        if(t == 1){
            countT1++;
            arr1.push_back(countT1 + countT2 + countT3);
        }
        else{
            if(t == 2){
                countT2++;
                arr2.push_back(countT1 + countT2 + countT3);
            } else{
                countT3++;
                arr3.push_back(countT1 + countT2 + countT3);
            } 
        } 
    }
    int minimum = min(countT1, countT2);
    minimum = min(minimum, countT3);
    if(minimum == 0) cout << minimum;
    else{
        cout << minimum << endl;
        while(minimum--){
            countT1--;
            countT2--;
            countT3--;
            cout << arr1.at(countT1) << " " << arr2.at(countT2) << " " << arr3.at(countT3) << endl;
        } 
    }
    return 0;
} 