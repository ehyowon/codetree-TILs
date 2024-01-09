#include <iostream>
using namespace std;

int main() {
    int m1, m2, d1, d2;
    cin >> m1 >> d1 >> m2 >> d2;
    int month = m1, day = d1;
    int days = 1;
    int num_of_days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    while(true) {
        if(month == m2 && day == d2)
            break;
    
        days++;
        day++;
    
        if(day > num_of_days[month]) {
            month++;
            day = 1;
        }
    }
    cout << days;
    return 0;
}