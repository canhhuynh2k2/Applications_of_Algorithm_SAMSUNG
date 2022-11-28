#include<bits/stdc++.h>
using namespace std;
int F[505][505], A[505][505];
int main(){
    int t, n, m;
    cin >> t;
    while(t--){
        cin >> n >> m;
        int ans = 0;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                cin >> A[i][j];
                F[i][j] = 0;
            }
        }
        for(int i = 0; i <= n; i++) if(A[i][1]) F[i][1] = 1;
        for(int i = 0; i <= m; i++) if(A[1][i]) F[1][i] = 1;
        for(int i = 2; i <= n; i++){
            for(int j = 2; j <= m; j++){
                if(A[i][j]){
                    if(A[i][j] == A[i-1][j] && A[i][j] == A[i][j-1] && A[i][j] == A[i-1][j-1])  
                        F[i][j] = min(F[i-1][j], min(F[i-1][j-1], F[i][j-1])) + 1;
                    else F[i][j] = 1;
                }
                else F[i][j] = 0;
                ans = max(ans, F[i][j]);
            }
        }
        cout << ans << '\n';
    }
    
}