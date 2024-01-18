#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int nx = 0, ny = 0;
    int move;
    char dir;

    for(int i = 0; i < n; i++){
        cin >> dir >> move;
        if(dir == 'N'){
            ny += move;
        }else if(dir == 'E'){
            nx += move;
        }else if(dir == 'S'){
            ny -= move;
        }else{
            nx -= move;
        }
    }

    cout << nx << " " << ny;
    
    return 0;
}