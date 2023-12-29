#include <iostream>
#include <string>
using namespace std;

int main() {
    string A;
    cin >> A;
    for(int i = 0; i < A.length(); i++){
        if(A[i] >= 'a' && A[i] <= 'z'){
            A[i] = toupper(A[i]);
        }else{
            A[i] = tolower(A[i]);
        }
    }
    cout << A;
    return 0;
}