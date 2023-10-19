#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr;
    int n, num;
    cin >> n;
    n--;
    while(n--){
        cin >> num;
        arr.push_back(num);
    }
    sort(arr.begin(), arr.end());
    int size = 0;
    while(size < arr.size()){
        if(arr.at(size) != size + 1){
            cout << size + 1;
            break;
        }
        size++;
    }
    return 0;
} 