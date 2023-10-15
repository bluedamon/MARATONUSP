#include <iostream>
#include <string>
using namespace std;

int main(){
    int t;
    cin >> t;
    string num;
    while(t--){
        cin >> num;
        int length = num.length();
        cout << length << endl;
    }
    return 0;
}
