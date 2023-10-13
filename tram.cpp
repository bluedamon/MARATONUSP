#include <iostream>
#include <string>
using namespace std;

int main(){
    int max = 0;
    int passengers = 0;
    int n;
    cin >> n;
    while(n--){
        int a, b;
        cin >> a >> b;
        passengers = passengers - a + b;
        if(passengers > max) max = passengers;
    }
    cout << max;
    return 0;
}