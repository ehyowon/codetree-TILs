#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2;
    cin >> str1 >> str2;
	int idx = -1;

	if((str1.find(str2)) != string::npos) {
		idx = str1.find(str2);
	}

	cout << idx;
    return 0;
}