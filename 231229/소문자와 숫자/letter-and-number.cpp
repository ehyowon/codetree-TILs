#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;
    int len = str.length();
    for(int i = 0; i < len; i++){
        if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')){
			cout << (char)tolower(str[i]);
		}
		if(str[i] >= '0' && str[i] <= '9') {
			cout << str[i];
		}
    }
    return 0;
}