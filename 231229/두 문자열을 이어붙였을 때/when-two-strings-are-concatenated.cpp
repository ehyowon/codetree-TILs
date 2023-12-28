#include <iostream>
#include <string>
using namespace std;

int main() {
    string A, B;
    cin >> A >> B;
    string AB = A + B;
    string BA = B + A;
    if(AB == BA){
        cout << "true";
    }else{
        cout << "false";
    }
    return 0;
}