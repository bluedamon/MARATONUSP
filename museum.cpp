#include <iostream>
#include <string>
#include <math.h>
using namespace std;

const int MAX = 123;
int main(){
    string str;
    cin >> str;
    int pointerToFirst = 1;
    int pointerToLast = 26;
    int pointerToActual = 1;
    int length = str.length();
    int i = 0;
    int dist = 0;
    int distOne, distTwo;
    while(i < length){
        int pointerToNext = str[i] - 96;
        if(pointerToActual < pointerToNext){
            distOne = abs(pointerToNext - pointerToActual);
            distTwo = abs(pointerToActual - pointerToFirst) + abs(pointerToLast - pointerToNext) + 1;
        } else{
            distOne = abs(pointerToNext - pointerToActual);
            distTwo = abs(pointerToActual - pointerToLast) + abs(pointerToFirst - pointerToNext) + 1;
        }
        if(distOne < distTwo) dist += distOne;
        else dist += distTwo;
        pointerToActual = pointerToNext;
        i++;
    }
    cout << dist;
    return 0;
}
