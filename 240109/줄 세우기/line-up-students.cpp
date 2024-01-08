#include <iostream>
#include <algorithm>
using namespace std;

class Student{
    public:
        int height;
        int weight;
        int number;
        Student(int height, int weight, int number) {
            this->height = height;
            this->weight = weight;
            this->number = number;
        }
		Student(){}
};

bool Cmp(Student a, Student b) {
    if(a.height != b.height){
        return a.height > b.height;
    }
    if(a.weight != b.weight){
        return a.weight > b.weight;
    }
    return a.number < b.number;
}

Student students[1000];

int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        int height, weight;
        cin >> height >> weight;
        students[i] = Student(height, weight, i+1);
    }
    sort(students, students + n, Cmp);
    for (int i = 0; i < n; i++){
        cout << students[i].height << " ";
        cout << students[i].weight << " ";
        cout << students[i].number << endl;
    }
    return 0;
}