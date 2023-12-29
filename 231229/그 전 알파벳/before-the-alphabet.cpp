#include <iostream>
using namespace std;

int main() {
    char a;
    cin >> a;
    if(a == 'a'){
        cout << 'z';
    }else{
        int n = (int)a -1;
        cout << (char)n;
    }
    return 0;
}