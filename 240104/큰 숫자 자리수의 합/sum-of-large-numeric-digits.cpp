#include <iostream>
using namespace std;

int Sum(int n){
    if(n == 0){
        return 0;
    }
    return Sum(n/10) + (n%10);
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int n = a * b * c;

    cout << Sum(n);
    return 0;
}