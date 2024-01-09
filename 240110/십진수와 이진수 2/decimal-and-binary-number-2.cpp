#include <iostream>
using namespace std;

int main() {
    string n;
    cin >> n;
    
    int num = 0;
    for(int i = 0; i < (int) n.size(); i++){
        num = num * 2 + (n[i] - '0');
    }
    num *= 17;
    int digits[100] = {};
    int cnt = 0;
    while(true){
        if(num < 2){
            digits[cnt++] = num;
            break;
        }
        digits[cnt++] = num % 2;
        num /= 2;
    }
    for(int i = cnt - 1; i >= 0; i--){
        cout << digits[i];
    }
    return 0;
}