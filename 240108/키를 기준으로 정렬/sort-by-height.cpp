#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class P{
    public:
        string name;
        int height;
        int age;
        P(string name, int height, int age){
            this->name = name;
            this->height = height;
            this->age = age;
        }
    P(){}
};

bool cmp(P p1, P p2){
    return p1.height < p2.height;
}

P people[10];

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        string name;
        int height;
        int age;
        cin >> name >> height >> age;

        people[i] = P(name, height, age);
    }
    sort(people, people + n, cmp);
    for(int i = 0; i < n; i++){
        cout << people[i].name << " " << people[i].height << " " << people[i].age << endl;
    }

    return 0;
}