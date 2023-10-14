#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int x, y, z;
        cin >> x >> y >> z;
        vector<int> arr;
        arr.push_back(x);
        arr.push_back(y);
        arr.push_back(z);
        sort(arr.begin(), arr.end());
        if(arr.at(1) == arr.at(2)){
            cout << "YES" << endl;
            cout << arr.at(0) << " " << arr.at(0) << " " << arr.at(1) << endl;
        } else cout << "NO" << endl;
    }
    return 0;
}