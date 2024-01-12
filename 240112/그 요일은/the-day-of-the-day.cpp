#include <iostream>
#include <string>
using namespace std;

int main() {
    int m1, m2, d1, d2;
    string A;
    cin >> m1 >> d1 >> m2 >> d2 >> A;
    int month = m1, day = d1;
    int days = 1;
    if(A == "Sun"){
        days += 6;
    }else if(A == "Mon"){
        days += 7;
    }else if(A == "Tue"){
        days += 1;
    }else if(A == "Wed"){
        days += 2;
    }else if(A == "Thu"){
        days += 3;
    }else if(A == "Fri"){
        days += 4;
    }else if(A == "Sat"){
        days += 5;
    }
    int num_of_days[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    while(true) {
        if(month == m2 && day == d2){
            break;
        }
        days++;
        day++;
        if(day > num_of_days[month]){
            month++;
            day = 1;
        }
    }
    cout << days / 7;
    return 0;
}