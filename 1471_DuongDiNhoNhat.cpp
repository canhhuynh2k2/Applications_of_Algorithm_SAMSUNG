#include<bits/stdc++.h>
using namespace std;
int A[505][505], C[505][505], N, M;
int tinh(){
    memset(C, 0, sizeof(C));
    for(int i = 1; i <= M; i++) C[1][i] = C[1][i-1] + A[1][i];
    for(int i = 1; i <= N; i++) C[i][1] = C[i-1][1] + A[i][1];
    for(int i = 2; i <= N; i++){
        for(int j = 2; j <= M; j++){
            C[i][j] = min(C[i-1][j], min(C[i][j-1], C[i-1][j-1])) + A[i][j];
        }
    }
    return C[N][M];
}
int main(){
    int t, i, j;
    cin >> t;
    while(t--){
        cin >> N >> M;
        for(int i = 1; i <= N; i++)
            for(int j = 1; j <= M; j++)
                cin >> A[i][j];
        cout << tinh() << '\n';
    }
}