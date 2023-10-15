#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){    
       string str;
       cin >> str;
       count(str.begin(), str.end(), 'N') == 1 ? cout << "NO" << endl : cout << "YES" << endl;
    }
    return 0;
}

