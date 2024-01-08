#include <iostream>
#include <string>
using namespace std;

class Bomb{
    public:
        string unlock_code;
        char linear_color;
        int time;
        Bomb(string unlock_code, char linear_color, int time) {
            this->unlock_code = unlock_code;
            this->linear_color = linear_color;
            this->time = time;
        }
};

int main(){
    string u_code;
    char l_color;
    int time;
    cin >> u_code >> l_color >> time;
    Bomb b = Bomb(u_code, l_color, time);

    cout << "code : " << b.unlock_code << endl;
    cout << "color : " << b.linear_color << endl;
    cout << "second : " << b.time << endl;
    return 0;
}