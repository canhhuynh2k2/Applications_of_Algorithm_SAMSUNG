#include<bits/stdc++.h>
using namespace std;
int a[1005];
int main(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        for(int i = 1; i <= n; i++) cin >> a[i];
        int F[n+1] = {0}, ans = a[1];
        F[1] = a[1];
        for(int i = 2; i <= n; i++){
            int Max = 0;
            for(int j = 1; j < i; j++){
                if(a[j] < a[i]) Max = max(F[j], Max);
            }
            F[i] = Max + a[i];
            ans =  max(ans, F[i]);
        }
        cout << ans << '\n';
    }
}