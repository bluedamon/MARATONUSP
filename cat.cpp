#include <iostream>
#include <string>
#define IOFAST ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);
using namespace std;

int main(){
    IOFAST;
    int t;
    cin >> t;
    while(t--){
        int length;
        cin >> length;
        char letter;
        cin >> letter;
        letter = tolower(letter);
        int count = 1;
        if(letter == 'm'){
            //
            while(count < length && letter == 'm'){
                cin >> letter;
                letter = tolower(letter);
                count++;
            }
            if(letter == 'e'){
                //
                while(count < length && letter == 'e'){
                    cin >> letter;
                    letter = tolower(letter);
                    count++;
                }
                if(letter == 'o'){
                    //
                    while(count < length && letter == 'o'){
                        cin >> letter;
                        letter = tolower(letter); 
                        count++;
                    }
                    if(letter == 'w'){
                        //
                        while(count < length && letter == 'w'){
                            cin >> letter;
                            letter = tolower(letter);
                            count++;
                        }
                        if(letter == 'w'){
                            cout << "YES" << endl;
                        } else {
                            if(count < length){
                                string trash;
                                cin >> trash;
                            }
                            cout << "NO" << endl;
                        }
                    }else {
                        if(count < length){
                            string trash;
                            cin >> trash;
                        }
                        cout << "NO" << endl; 
                    }
                }else {
                    if(count < length){
                        string trash;
                        cin >> trash;
                    }
                    cout << "NO" << endl;
                }
            }else {
                if(count < length){
                string trash;
                cin >> trash;
                }
                cout << "NO" << endl;
            }
        } else{
            if(count < length){
                string trash;
                cin >> trash;
            }
            cout << "NO" << endl;
        }
    }
    return 0;
}