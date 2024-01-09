#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int day = 11, hour = 11, min = 11;
    int minute = 0;
    if(a < 11 || (a == 11 && b < 11) || (a == 11 && b == 11 && c < 11)){
        cout << -1;
    }else{
        while(true){
            if(day == a && hour == b && min == c){
                break;
            }
            minute++;
            min++;
            if(min == 60){
                hour++;
                min = 0;
            }
            if(hour == 24){
                day++;
                hour = 0;
            }
        }
        cout << minute;
    }
    
    return 0;
}