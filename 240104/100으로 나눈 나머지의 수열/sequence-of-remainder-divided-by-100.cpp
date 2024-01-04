#include <iostream>
using namespace std;

int Cal(int a){
    if(a == 1)
        return 2;
    if(a == 2)
        return 4;
    return (Cal(a - 1) * Cal(a - 2)) % 100;
}

int main() {
    int n;
    cin >> n;
    cout << Cal(n);
    return 0;
}