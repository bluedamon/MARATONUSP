#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> people;
    while(n--){
        int i;
        cin >> i;
        people.push_back(i);
    }
    sort(people.begin(), people.end());
    int count = 0;
    int length = people.size();
    for(int i = 0; i < length ; i++){
        if(5 - people.at(i) < k) break;
        else count++;
    }
    int numberOfTeams = count / 3;
    cout << numberOfTeams;
    return 0;
}
