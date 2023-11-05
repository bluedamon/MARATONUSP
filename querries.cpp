#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main(){
    vector<int> qtd;
    qtd.push_back(0);
    qtd.push_back(0);
    string input;
    cin >> input;
    int count = 0;
    int i = 0;
    while(i < input.length() - 1){
        if(input[i] == input[i+1]) count++;
        qtd.push_back(count);
        i++;
    }
    int m;
    cin >> m;
    while(m--){
        int l, r;
        cin >> l >> r;
        cout << qtd.at(r) - qtd.at(l) << endl;
    }
    return 0;
}   