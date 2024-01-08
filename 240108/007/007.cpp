#include <iostream>
#include <string>
using namespace std;

class Info {
    public:
        string code;
        char place;
        int time;
        Info(string code, char place, int time) {
            this->code = code;
            this->place = place;
            this->time = time;
        }
};

int main(){
    string code;
    char place;
    int time;
    cin >> code >> place >> time;
    
    Info s = Info(code, place, time);

    cout << "secret code : " << s.code << endl;
    cout << "meeting point : " << s.place << endl;
    cout << "time : " << s.time << endl;
    return 0;
}