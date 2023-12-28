#include <iostream>
#include <string>
using namespace std;

int main() {
    string A, B;
    cin >> A >> B;
    int cnt = 0;
	for(int i = 0; i < A.length(); i++){
		if(A.find(B) == -1){
			break;
		}else if(A.find(B,i)<=i){
			cnt++;
		}
	}
    cout << cnt;
    return 0;
}