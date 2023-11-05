#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

const int MAX = 100001;

int main(){
    long long int n, m, k;
    cin >> n >> m >> k;
    vector<long long int> array;
    array.push_back(0);
    long long int u = 1;
    while(u <= n){
        long long int num;
        cin >> num;
        array.push_back(num);
        u++;
    }

    long long int left[MAX], right[MAX], dValue[MAX], qtd[MAX];
    long long int i = 1;
    while(i <= m){
        long long int l, r, d;
        cin >> l >> r >> d;
        left[i] = l;
        right[i] = r;
        dValue[i] = d;
        qtd[i] = 0;
        i++;
    }   

    long long int j = 1;
    while(j <= k){
        long long int x, y;
        cin >> x >> y;
        for(long long int w = x; w <= y; w++){
            qtd[w]++;
        }
        j++;
    }

    long long int v = 1;
    while(v <= m){
        long long int times = qtd[v];
        long long int d = dValue[v];
        for(long long int h = left[v]; h <= right[v]; h++){
            array[h] += times * d;
        }
        v++;
    }

    long long int p = 1;
    while(p <= n){
        cout << array.at(p) << " ";
        p++;
    } 

    return 0;
}