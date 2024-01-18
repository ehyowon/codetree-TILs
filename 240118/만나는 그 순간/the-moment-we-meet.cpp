#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    char Ad[1000], Bd[1000]; //d방향 입력
    int At[1000], Bt[1000]; //t시간 입력
    for(int i = 0; i < n; i++){
        cin >> Ad[i] >> At[i];
    }
    for(int i = 0; i < m; i++){
        cin >> Bd[i] >> Bt[i];
    }

    int dis_A = 0, dis_B = 0; //위치
    int idx_A = 0, idx_B = 0; //인덱스
    int A[1000000] = {}, B[1000000] = {}; //시간에 따른 위치 - 인덱스:시간, 안에값:위치

    //A배열에 값 채우기
    for(int i = 0; i < n; i++){
        for(int j = idx_A; j < idx_A + At[i]; j++){
            if(Ad[i] == 'R'){
                dis_A++;
            }else{
                dis_A--;
            }
            A[j] = dis_A;
        }
        idx_A += At[i];
    }

    //B배열에 값 채우기
    for(int i = 0; i < m; i++){
        for(int j = idx_B; j < idx_B + Bt[i]; j++){
            if(Bd[i] == 'R'){
                dis_B++;
            }else{
                dis_B--;
            }
            B[j] = dis_B;
        }
        idx_B += Bt[i];
    }

    bool Meet = false; //만나는지
    for(int i = 0; i < 1000000; i++){
        if(i != 0 && A[i] == B[i]){
            Meet = true;
            cout << i+1;
            break;
        }
    }
    if(Meet == false){
        cout << -1;
    }

    return 0;
}