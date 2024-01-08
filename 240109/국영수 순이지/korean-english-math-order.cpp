#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

class student{
    public:
        string name;
        int kor;
        int eng;
        int math;
        student(string name, int kor, int eng, int math){
            this->name = name;
            this->kor = kor;
            this->eng = eng;
            this->math = math;
        }
    student(){}
};

bool cmp(student a, student b){
    if(a.kor != b.kor){
        return a.kor > b.kor;
    }
    if(a.eng != b.eng){
        return a.eng > b.eng;
    }
    return a.math > b.math;
}

student students[10];

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        string name;
        int kor, eng, math;
        cin >> name >> kor >> eng >> math;
        students[i] = student(name, kor, eng, math);
    }
    sort(students, students + n, cmp);
    for(int i = 0; i < n; i++){
        cout << students[i].name << " " << students[i].kor << " " << students[i].eng << " " << students[i].math << endl;
    }
    return 0;
}