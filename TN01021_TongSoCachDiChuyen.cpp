#include<bits/stdc++.h>
using namespace std;
long long F[100005];
int main(){
    int t, n, k;
    long long mod = 1e9+7;
    cin >> t;
    while(t--){
        cin >> n >> k;
        F[0] = 1; F[1] = 1; F[2] = 2;
        for(int i = 3; i <= n; i++){
            F[i] = 0;
            for(int j = 1; j <= min(i, k); j++){
                F[i] = (F[i] + F[i-j]) % mod;
            }
        }
        cout << F[n] << '\n';
    }
}