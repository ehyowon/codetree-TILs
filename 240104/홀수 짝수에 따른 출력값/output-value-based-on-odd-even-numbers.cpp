#include <iostream>
using namespace std;

int Even(int n){
    if(n <= 0){
        return 0;
    }
    return Even(n-2) + n;
}

int Odd(int n){
    if(n <= 0){
        return 0;
    }
    return Odd(n-2) + n;
}

int main() {
    int n;
    cin >> n;
    if(n % 2 == 0){
        cout << Even(n);
    }else{
        cout << Odd(n);
    }
    return 0;
}