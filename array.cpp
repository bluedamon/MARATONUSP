#include <bits/stdc++.h>
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
    int i = 0;
    while(i < countNegatives){
        cout << countNegatives << " " << arr.at(i) << " ";
        i++;
    } 
    cout << endl;
    int j = countNegatives + 1;
    while(j < arr.size()){
        cout << arr.size() - countNegatives - 1 << " " << arr.at(j) << " ";
        j++;
    } 
    cout << endl;
    cout << 1 << " " << 0;
    return 0;
}
