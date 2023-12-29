#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	cin >> str;
	int len = str.length();
	while(len > 1){
		int a;
        cin >> a;
		if(a >= len)
			a = len - 1;
		str.erase(a, 1);
		len--;
		cout << str << endl;
	}
    return 0;
}