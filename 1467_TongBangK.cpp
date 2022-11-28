#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    const long long mod = 1e9 + 7;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        long long F[k+1] = {0}, A[n+1];
        F[0] = 1;
        for(int i = 0; i < n; i++) cin >> A[i];
        for(int i = 1; i <= k; i++){
            for(int j = 0; j < n; j++){
                if(i >= A[j])    F[i] = (F[i] + F[i - A[j]]) % mod;
            }
        }
        cout << F[k] << '\n';
    }
}