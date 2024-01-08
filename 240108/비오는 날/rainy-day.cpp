#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Broad {
public:
    string date;
    string day;
    string weather;

    Broad() {}  // Default constructor

    Broad(string date, string day, string weather) {
        this->date = date;
        this->day = day;
        this->weather = weather;
    }

    // Overload the < operator for sorting
    bool operator<(const Broad& other) const {
        return date < other.date;
    }
};

Broad info[100];

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string date;
        string day;
        string weather;
        cin >> date >> day >> weather;

        info[i] = Broad(date, day, weather);
    }

    sort(info, info + n);

    for (int i = 0; i < n; i++) {
        if (info[i].weather == "Rain") {
            cout << info[i].date << " " << info[i].day << " " << info[i].weather << endl;
            break;  // Break out of the loop after printing the first occurrence of "Rain"
        }
    }

    return 0;
}