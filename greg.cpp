#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#define IOFAST ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);
using namespace std;

const int MAX = 100001;
int main(){
    IOFAST;
    long long int n, m, k;
    cin >> n >> m >> k;
    vector<long long int> array;
    array.push_back(0);
    long long int i = 1;
    while(i <= n){
        long long int num;
        cin >> num;
        array.push_back(num);
        i++;
    }

    vector<string> operation;
    operation.push_back(" ");
    int j = 1;
    while(j <= m){
        string input;
        getline(cin, input);
        cout << input << endl;
        j++;
    }

    return 0;
}