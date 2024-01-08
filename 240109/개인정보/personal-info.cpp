#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class person{
    public:
        string name;
        int height;
        double weight;
        person(string name, int height, double weight){
            this->name = name;
            this->height = height;
            this->weight = weight;
        }
        person(){}
};

bool cmp_n(person a, person b){
    return a.name < b.name;
}

bool cmp_h(person a, person b){
    return a.height > b.height;
}

person people[5];

int main() {
    for(int i = 0; i < 5; i++){
        string name;
        int height;
        double weight;
        cin >> name >> height >> weight;
        people[i] = person(name, height, weight);
    }
    cout << fixed;
    cout.precision(1);
    sort(people, people + 5, cmp_n);
    cout << "name" << endl;
    for(int i = 0; i < 5; i++){
        cout << people[i].name << " " << people[i].height << " " << people[i].weight << endl;
    }
    cout << endl;
    sort(people, people + 5, cmp_h);
    cout << "height" << endl;
    for(int i = 0; i < 5; i++){
        cout << people[i].name << " " << people[i].height << " " << people[i].weight << endl;
    }
    return 0;
}