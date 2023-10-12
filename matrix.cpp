#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int value = 0;
    int min;
    for(int i = 1; i <= 5 && !value; i++){
        for(int j = 1; j <= 5 && !value; j++){
            cin >> value;
            if(value) min = abs(3 - i) + abs(3 - j);
        }
    }
    cout << min << endl;
    return 0;
}