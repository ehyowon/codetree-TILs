#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Student{
public:
    int height;
    int weight;
    int index;
    Student(int h, int w, int i){
        height = h;
        weight = w;
        index = i;
    }
    Student(){}
};

bool Sort(Student a, Student b){
    if(a.height == b.height)
        return a.weight > b.weight;
    return a.height < b.height;
};

Student students[1000];
Student new_stu[1000];

int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n; ++i) {
        int h, w;
        cin >> h >> w;
        students[i] = Student(h, w, i + 1);
    }

    sort(students, students + n, Sort);

    for(int i = 0; i < n; ++i) {
        cout << students[i].height << " " << students[i].weight << " " << students[i].index << endl;
    }
    
    return 0;
}