#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int n, A[100], B[100];
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }
    for(int i = 0; i < n; i++){
        cin >> B[i];
    }
    sort(A, A + n);
    sort(B, B + n);
    bool same = true;
    for(int i = 0; i < n; i++){
        if(A[i] != B[i]){
            same = false;
        }
    }
    if(same == true){
        cout << "Yes";
    }else{
        cout << "No";
    }
    return 0;
}