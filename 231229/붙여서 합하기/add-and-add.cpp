#include <iostream>
#include <string>
using namespace std;

int main() {
    string A, B;
    cin >> A >> B;
    string AB = A + B;
    string BA = B + A;
    int sum = stoi(AB) + stoi(BA);
    cout << sum;
    return 0;
}