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

    //int iA = 0, iB = 0;
    int A[1000000] = {}, B[1000000] = {};

    int idx_A = 1;
	int idx_B = 1;
	for(int i = 1; i <= n; ++i){
		for(int t = 1; t <= At[i]; ++t){
			A[idx_A++] = Av[i] + A[idx_A - 1];
		}
	}
	for(int i = 1; i <= m; ++i){
		for(int t = 1; t <= Bt[i]; ++t){
			B[idx_B++] = Bv[i] + B[idx_B - 1];
		}
	}
/*
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
    */

    int idx = idx_A;
    int Minus[1000000] = {};
    for(int i = 0; i < idx; i++){
        Minus[i] = A[i] - B[i];
        //cout << Minus[i] << endl;
    }
    int cnt = 0;
    for(int i = 0; i < 1000000; i++){
        if(Minus[i] * Minus[i-1] < 0 || Minus[i] == 0 && Minus[i-1] < 0 || Minus[i] < 0 && Minus[i-1] == 0){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}