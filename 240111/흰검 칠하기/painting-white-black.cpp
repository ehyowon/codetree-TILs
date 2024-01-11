#include <iostream>
using namespace std;

class Tile{
public:
    int white = 0, black = 0;
    char last;
    Tile(int white, int black, char last){
        this->white = white;
        this->black = black;
        this->last = last;
    }
    Tile(){}
};

Tile tiles[200001];

int main() {
    int n, num[1000] = {}, start = 100000;
    char dir[1000] = {};
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> num[i] >> dir[i];
    }

    for(int i = 0; i < n; i++){
        if(dir[i] == 'R'){
            for(int j = start; j < start+num[i]; j++){
                tiles[j].black++;
                tiles[j].last = 'B';
            }
            start += num[i]-1;
        }else if(dir[i] == 'L'){
            for(int j = start; j > start-num[i]; j--){
                tiles[j].white++;
                tiles[j].last = 'W';
            }
            start -= num[i]-1;
        }
    }

    int num_w = 0, num_g = 0, num_b = 0;
    for(int i = 0; i < 200001; i++){
        if(tiles[i].white >= 2 && tiles[i].black >= 2){
            tiles[i].last = 'G';
        }
    }
    /*for(int i = 99992; i< 100008; i++){
        cout << tiles[i].last;
    }*/
    for(int i = 0; i < 200001; i++){
        if(tiles[i].last == 'W'){
            num_w++;
        }else if(tiles[i].last == 'G'){
            num_g++;
        }else if(tiles[i].last == 'B'){
            num_b++;
        }
    }
    cout << num_w << " " << num_b << " " << num_g;
    return 0;
}