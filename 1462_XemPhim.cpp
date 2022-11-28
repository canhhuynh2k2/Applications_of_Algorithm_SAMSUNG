#include<bits/stdc++.h>
using namespace std;
int b[105][25005] = {0};
int main(){
    int C, n;
    cin >> C >> n;
    int a[105];
    for(int i = 1; i <= n; i++) cin >> a[i];
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= C; j++){
            b[i][j] = b[i-1][j];
            if(a[i] <= j) b[i][j] = max(b[i-1][j], b[i-1][j-a[i]] + a[i]);
            
        }
    }
    cout << b[n][C] << endl;
}