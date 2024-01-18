#include <iostream>
#include <string>
using namespace std;

int main() {
    int x = 0, y = 0, dir = 4;
    string str;
    cin >> str;
    for(int i = 0; i < str.length(); i++){
        if(str[i] == 'L'){
            dir--;
        }else if(str[i] == 'R'){
            dir++;
        }else if(str[i] == 'F'){
            if(dir%4 == 0){
                y++;
            }else if(dir%4 == 1){
                x++;
            }else if(dir%4 == 2){
                y--;
            }else if(dir%4 == 3){
                x--;
            }
        }
    }
    cout << x << " " << y;
    return 0;
}