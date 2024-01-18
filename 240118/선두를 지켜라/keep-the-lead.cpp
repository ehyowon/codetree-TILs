#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int Av[1000], At[1000], Bv[1000], Bt[1000];
    for(int i = 0; i < n; i++){
        cin >> Av[i] >> At[i];
    }
    for(int i = 0; i < m; i++){
        cin >> Bv[i] >> Bt[i];
    }

    int iA = 0, iB = 0;
    int dis_A = 0, dis_B = 0;
    int A[1000000] = {}, B[1000000] = {};
    for(int i = 0; i < n; i++){
        for(int j = iA; j < iA + At[i] * Av[i]; j++){
            dis_A++;
            A[j] = dis_A;
        }
        iA += At[i] * Av[i];
    }
    for(int i = 0; i < m; i++){
        for(int j = iB; j < iB + Bt[i] * Bv[i]; j++){
            dis_B++;
            B[j] = dis_B;
        }
        iB += Bt[i] * Bv[i];
    }

    int idx = iA;
    int cnt = 0;
    char Faster[1000000];
    for(int i = 0; i < idx; i++){
        if(A[i] > B[i]){
            Faster[i] = 'A';
        }else{
            Faster[i] = 'B';
        }
    }
    for(int i = 0; i < 1000000; i++){
        if(Faster[i] != Faster[i-1]){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}