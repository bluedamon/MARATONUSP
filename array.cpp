#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> pos;
    vector<int> neg;
    int i = 0;
    while(i < n){
        int num;
        cin >> num;
        if(num < 0) neg.push_back(num);
        else if(num > 0) pos.push_back(num);
        i++;
    }
    if(neg.size() == 1){
        cout << 1 << " " << neg.at(0);
        cout << endl;
        int pSize = pos.size();
        cout << pSize << " ";
        while(pSize > 0){
            pSize--;
            cout << pos.at(pSize) << " ";
        }
        cout << endl;
        cout << 1 << " " << 0;
    } else{
        if(neg.size() % 2 == 0){
            if(pos.size()){
                int nSize = neg.size() - 1;
                cout << nSize << " ";
                while(nSize > 0){
                    nSize--;
                    cout << neg.at(nSize) << " ";
                }
                cout << endl;
                int pSize = pos.size();
                cout << pSize << " ";
                while(pSize > 0){
                    pSize--;
                    cout << pos.at(pSize) << " ";
                }
                cout << endl;
                cout << 2 << " " << 0 << " " << neg.at(neg.size() - 1);
            } else {
                int nSize = neg.size() - 3;
                cout << nSize << " ";
                while(nSize > 0){
                    nSize--;
                    cout << neg.at(nSize) << " ";
                }
                cout << endl;
                cout << 2 << " ";
                cout << neg.at(neg.size() - 3) << " " << neg.at(neg.size() - 2) << " ";
                cout << endl;
                cout << 2 << " " << 0 << " " << neg.at(neg.size() - 1);
            }
        } else{
            if(pos.size()){
                int nSize = neg.size();
                cout << nSize << " ";
                while(nSize > 0){
                    nSize--;
                    cout << neg.at(nSize) << " ";
                }
                cout << endl;
                int pSize = pos.size();
                cout << pSize << " ";
                while(pSize > 0){
                    pSize--;
                    cout << pos.at(pSize) << " ";
                }
                cout << endl;
                cout << 1 << " " << 0;
            } else{
                int nSize = neg.size() - 2;
                cout << nSize << " ";
                while(nSize > 0){
                    nSize--;
                    cout << neg.at(nSize) << " ";
                }
                cout << endl;
                cout << 2 << " ";
                cout << neg.at(neg.size() - 2) << " " << neg.at(neg.size() - 1) << " ";
                cout << endl;
                cout << 1 << " " << 0;
            }
        }
    }
    return 0;
}
