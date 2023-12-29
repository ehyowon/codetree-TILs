#include <iostream>
#include <string>
using namespace std;

int main() {
    string A, B;
    cin >> A >> B;
    string n1 = "", n2 = "";
    for(int i = 0; i < A.length(); i++){
        if(A[i] >= '0' && A[i] <= '9'){
            n1 += A[i];
        }else{
            break;
        }
    }
        for(int i = 0; i < B.length(); i++){
        if(B[i] >= '0' && B[i] <= '9'){
            n2 += B[i];
        }else{
            break;
        }
    }
    cout << stoi(n1) + stoi(n2);
    return 0;
}