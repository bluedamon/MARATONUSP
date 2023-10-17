#include <iostream>
#include <string>
using namespace std;

const int firstBirthday = 1867;
int main(){
    int n;
    cin >> n;
    int freeOfficers = 0;
    int untreated = 0;
    while(n--){
        int input;
        cin >> input;
        if(input != -1) freeOfficers += input;
        else
            if(freeOfficers == 0) untreated++;
            else freeOfficers--;
    }
    cout << untreated << endl;
    return 0; 
}