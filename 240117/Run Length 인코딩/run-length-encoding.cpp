#include <iostream>
#include <string>

using namespace std;

int main() {
    string A;
    cin >> A;

    // 변환
    string encoded = "";

    // 입력의 첫번째 값을 읽고 초기화합니다.
    char curr_char = A[0];
    int num_char = 1;
    for(int i = 1; i < A.length(); i++){
        if(A[i] == curr_char){
            // 지금까지의 문자와 같으면 연속된 문자 개수만 추가해 주고 넘어갑니다.
            num_char++;
        }
        else {
            // 지금까지의 문자와 다르면 새로운 문자로 바꿔줘야 합니다.
            // 지금까지 세어온 curr_char와 num_char를 기록합니다.
            encoded += curr_char;
            encoded += to_string(num_char);
            // curr_char와 num_char를 현재 값으로 초기화합니다.
            curr_char = A[i];
            num_char = 1;
        }
    }
    // 마지막 덩어리에 해당하는 curr_char와 num_char를 기록합니다.
    encoded += curr_char;
    encoded += to_string(num_char);

    cout << (int) encoded.length() << endl << encoded;
    return 0;
}