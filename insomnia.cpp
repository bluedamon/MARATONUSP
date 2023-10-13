#include <iostream>
#include <string>
using namespace std;

int main(){
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;
    int count = 0;
    if(k <= d || l <= d || m <= d || n <= d)
        while(d){
            if(d % k == 0 || d % l == 0 || d % m == 0|| d % n == 0) count++;
            d--;
        } 
    cout << count;
    return 0;
}