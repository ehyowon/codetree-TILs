#include <iostream>
#include <string>
using namespace std;

int main() {
    string A, B;
    cin >> A >> B;
    int j;
    for(int i = 0; i < A.length(); i++){
        for(j = 0; j< B.length(); j++){
            if(A[i + j] != B[j]){
                break;
            }
        }
        if(j == B.length()){
            A.erase(i, j);
            i = -1;
        }
    }
    cout << A;
	return 0;
}