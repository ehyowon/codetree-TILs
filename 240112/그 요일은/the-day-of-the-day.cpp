#include <iostream>
#include <string>
using namespace std;

int main() {
    int m1, m2, d1, d2;
    string A;
    cin >> m1 >> d1 >> m2 >> d2 >> A;
    int month = m1, day = d1, i = 0;
    int week[7] = {};
    int num_of_days[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    while(true){
        if(month == m2 && day == d2){
            break;
        }
        day++;
        week[i]++;
        i++;
        if(day > num_of_days[month]){
            month++;
            day = 1;
        }
        if(i >= 7){
            i = 0;
        }
    }
    if(A == "Sun"){
        cout << week[6];
    }else if(A == "Mon"){
        cout << week[0];
    }else if(A == "Tue"){
        cout << week[1];
    }else if(A == "Wed"){
        cout << week[2];
    }else if(A == "Thu"){
        cout << week[3];
    }else if(A == "Fri"){
        cout << week[4];
    }else if(A == "Sat"){
        cout << week[5];
    }else{
        cout << 0;
    }
    return 0;
}