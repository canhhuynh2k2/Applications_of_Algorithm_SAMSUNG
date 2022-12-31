#include<bits/stdc++.h>
using namespace std;
long long F[1000005];
int main(){
    int t = 5, n;
    cin >> t;
    while(t--){
        cin >> n;
        long long a[n+1];
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }
        long long Max1, Max2;
        Max1 = a[1]; F[1] = a[1]; Max2 = max(Max1, a[2]); F[2] = Max2;
        for(int i = 3; i <= n; i++){
            F[i] = Max1 + a[i];
            Max1 = Max2;
            Max2 = max(Max2, F[i]);
        }
        cout << max(F[n], F[n-1]) << '\n';
    }
}