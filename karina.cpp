#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#define IOFAST ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);
using namespace std;

int main(){
    IOFAST;
    int t;
    cin >> t;
    while(t--){
        vector<long long int> number;
        int n;
        cin >> n;
        while(n--){
            int a;
            cin >> a;
            number.push_back(a);
        }
        sort(number.begin(), number.end());
        cout << max(number.at(0)*number.at(1), number.at(number.size() - 1)*number.at(number.size() - 2)) << endl;;
    }
    return 0;
}