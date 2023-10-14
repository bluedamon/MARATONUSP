#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
    
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> array;
        int max = 0;
        while(n--){
            int number;
            cin >> number;
            if(number > max) max = number;
            array.push_back(number);
        }
        sort(array.begin(), array.end());
        int length = 1;
        int j = 1;
        int pred = array.at(0);
        int size = array.size();
        while(j < size){
            int suc = array.at(j);
            if(suc > pred) length++;
            pred = suc;
            if(suc == max) break;
            j++;
        }
        cout << length << endl;
    }
    return 0;
}

