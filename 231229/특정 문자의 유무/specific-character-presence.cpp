#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int len = s.length();
    bool ee = false, ab = false;
    for(int i = 0; i < len; i++){
        if(s[i] == 'e' && s[i+1] == 'e'){
            ee = true;
        }
        if(s[i] == 'a' && s[i+1] == 'b'){
            ab = true;
        }
    }
	if (ee == true) cout << "Yes";
	else cout << "No";
    cout << " ";
    if (ab == true) cout << "Yes";
	else cout << "No";
    return 0;
}