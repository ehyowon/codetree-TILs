#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;
    int len = str.length();
    int ee = 0, eb = 0;
    for(int i = 0; i < len; i++){
        if(str[i] == 'e' && str[i+1] == 'e'){
            ee++;
        }
        if(str[i] == 'e' && str[i+1] == 'b'){
            eb++;
        }
    }
    cout << ee << " " << eb;
    return 0;
}