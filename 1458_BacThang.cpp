#include<bits/stdc++.h>
using namespace std;
long long mod = 1e9+7;
int main(){
    int n, k, t;
    cin >> t;
    while(t--){
        cin >> n >> k;
        long long F[n+1] = {0};
        F[0] = 1; F[1] = 1;
        for(int i = 2; i <= n; i++){
            for(int j = 1; j <= min(i, k); j++){
                F[i]  = (F[i] + F[i-j]) % mod;
            }
        }
        cout << F[n] << '\n';
    }
}