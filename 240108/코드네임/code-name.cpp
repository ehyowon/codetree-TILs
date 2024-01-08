#include <iostream>
#include <string>
using namespace std;

class Code{
    public:
        char name;
        int score;
    Code(char name, int score){
        this->name = name;
        this->score = score;
    }
}

Code agents[5];

int main() {
    for(int i = 0; i < 5; i++){
        char name;
        int score;
        cin >> name >> score;
    }
    int min = 0;
    for(int i = 0; i < 5; i++){
        if(agents[min].score > agents[i].score){
            min = i;
        }
    }
    cout << agents[min].name << " " << agents[min].score;
    return 0;
}