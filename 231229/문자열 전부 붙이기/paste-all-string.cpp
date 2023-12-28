#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    string arr[10];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        cout << arr[i];
    }
    return 0;
}