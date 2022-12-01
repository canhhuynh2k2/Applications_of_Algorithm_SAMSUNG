#include<bits/stdc++.h>
using namespace std;
long long mod = 1e9+7;
int n, k;
int solve(){
    if(k == 0 || k == n) return 1;
    long long a[n+1][n+1];
     for(int i = 0; i <= k; i++){
        for(int j = i; j <= n; j++){
            if(i == 0 || j == i) a[i][j] = 1;
            else a[i][j] = (a[i][j-1] + a[i-1][j-1]) % mod;
        }
    }
    return a[k][n];
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> k;
        cout << solve() << '\n';
    }
}