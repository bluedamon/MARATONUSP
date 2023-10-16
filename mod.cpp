#include <iostream>
#include <string>
using namespace std;

int main(){
    int t;
    cin >> t;    
    while(t--){
        long long int left, right, a;
        cin >> left >> right >> a;
        long long int leftQuo = left / a;
        long long int rightQuo = right / a;
        if(rightQuo == leftQuo){
            cout << (right / a) + (right % a) << endl;
        }else{
            rightQuo = (right / a) + (right % a);
            leftQuo = ((right / a) - 1) + (a - 1);
            cout << max(rightQuo, leftQuo) << endl;
        }
    }
    return 0;
}
