#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[100];
    int sum = 0;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        sum += arr[i];
    }
    string s = to_string(sum);
    int len = s.length();
    s = s.substr(1, len-1) + s.substr(0,1);
    cout << s;
    return 0;
}