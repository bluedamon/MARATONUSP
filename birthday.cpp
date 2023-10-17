#include <iostream>
#include <string>
using namespace std;

int main(){
    int num;
    cin >> num;
    int birth = 1867;
    int leap = 0;
    int count = num;
    string days[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    while(num){
        num--;
        birth++;
        if(birth % 4 == 0){
            if(birth % 100 != 0) leap++;
            else
                if(birth % 400 == 0) leap++;
        }
    }
    int day = (2*leap) % 7 + (count - leap) % 7;
    cout << days[day % 7];
    return 0;
}
