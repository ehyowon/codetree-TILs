#include <iostream>
#include <string>
using namespace std;

int main() {
    string A, B;
    cin >> A >> B;
    int n = 0, len = A.length();
    for(int i = 0; i < len; i++){
        A = A.substr(len-1, 1) + A.substr(0, len-1); 
        n++;
        if(A == B){
            break;
        }
    }
    if(n == 0){
        cout << -1;
    }else{
        cout << n;
    }
    return 0;
}