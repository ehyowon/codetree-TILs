#include <iostream>

#define MAXN 10

using namespace std;

// Person 정보를 나타내는 클래스 선언
class Person{
    public:
        string name;
        string street_address;
        string region;
        Person(string name, string street_address, string region) {
            this->name = name;
            this->street_address = street_address;
            this->region = region;
        }
		Person(){}
};

Person people[MAXN];

int main(){
    // 변수 선언 및 입력
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        string name, address, region;
        cin >> name >> address >> region;
        
        // 객체 생성 및 리스트에 추가
        people[i] = Person(name, address, region);
    }
    
    // 사전순으로 이름이 가장 느린 사람 찾기
    int last_idx = 0;
    for(int i = 1; i < n; i++) {
        if(people[i].name > people[last_idx].name)
            last_idx = i;
    }

    // 결과를 출력합니다.
    cout << "name " << people[last_idx].name << endl;
    cout << "addr " << people[last_idx].street_address << endl;
    cout << "city " << people[last_idx].region << endl;
    return 0;
}