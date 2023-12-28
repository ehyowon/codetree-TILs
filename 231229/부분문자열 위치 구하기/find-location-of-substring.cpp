#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2;
    cin >> str1 >> str2;
    int cnt = 0;
	for(int i = 0; i< str1.length(); i++){
		if(str1.find(str2) == -1){
			break;
		}else if(str1.find(str2,i)<=i){
            cnt++;
		}
	}
	if(cnt == 0){
		cout << -1;
	}else{
		cout << cnt;
	}
    return 0;
}