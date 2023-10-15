#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

int main(){
    long long int n, k;
    cin >> n >> k;
    long long int evens = n / 2;
    long long int odds = evens; 
    if(n % 2 != 0) odds = evens + 1;
    if(k <= odds) cout << 2*(k - 1) + 1 << endl;
    else cout << 2*(k - odds) << endl;
    return 0;
}
