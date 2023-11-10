#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#define IOFAST ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);
using namespace std;

int main(){
    IOFAST;
    long long int t;
    cin >> t;
    while(t--){
        vector<long long int> number;
        long long int n;
        long long int m;
        cin >> n >> m;
        long long int i = 0;
        long long sum = 0;
        while(i < n){
            long long int a;
            cin >> a;
            sum += a;
            number.push_back(a);
            i++;
        }
        sort(number.begin(), number.end());

        long long int first;
        cin >> first;
        sum -= number.at(0);
        sum += first;
        number.at(0) = first;
        sort(number.begin(), number.end());

        long long int j = 1;
        while(j < m){
            long long int a;
            cin >> a;
            sum -= number.at(0);
            sum += a;
            number.at(0) = a;
            sort(number.begin(), number.end());
            j++;
        }

        cout << sum << endl;
    }
    return 0;
}