#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

class Student{
    public:
        string name;
        int height;
        int weight;
        Student(string name, int height, int weight) {
            this->name = name;
            this->height = height;
			this->weight = weight;
        }
		Student(){}
};

bool Cmp(Student a, Student b) {
    if(a.height != b.height)
        return a.height < b.height;
    return a.weight > b.weight;
}

Student students[10];

int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        string name;
        int height, weight;
        cin >> name >> height >> weight;
        students[i] = Student(name, height, weight);
    }

    sort(students, students + n, Cmp);

    for (int i = 0; i < n; i++){
        cout << students[i].name << " " << students[i].height << " " << students[i].weight << endl;
    }

    return 0;
}