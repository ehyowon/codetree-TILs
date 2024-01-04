#include <iostream>
using namespace std;

int Cal(int a) {
    if(a == 1)
        return 1;
    if(a == 2)
        return 2;

    return Cal(a / 3) + Cal(a - 1);
}

int main() {
    int n;
    cin >> n;
    cout << Cal(n);
    return 0;
}