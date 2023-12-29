#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
	string str;
	cin >> str;
	int len = str.length();
	for(int i = 0; i < len; i++) {
		if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
			cout << (char)toupper(str[i]);
		}
	}
}