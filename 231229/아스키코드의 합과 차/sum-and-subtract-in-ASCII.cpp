#include <iostream>
using namespace std;

int main() {
    char a, b;
    cin >> a >> b;
    int n = (int)a;
    int m = (int)b;
    int sum = n + m;
    int min;
    if(n > m){
        min = n - m;
    }else{
        min = m - n;
    }
    cout << sum << " " << min;
    return 0;
}