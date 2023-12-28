#include <iostream>
#include <string>
using namespace std;

int main() {
    string arr[10];
    string str_all = "";
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        str_all += arr[i];
    }
    for(int i = 0; i < str_all.length(); i++){
        cout << str_all[i];
        if(i % 5 == 4){
            cout << endl;
        }
    }
    return 0;
}