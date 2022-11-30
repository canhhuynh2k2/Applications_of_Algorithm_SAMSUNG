#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int a[n+1], b[n+1] = {0}, c[n+1] = {0};
        for(int i = 0; i < n; i++){
            cin >> a[i];
            b[i] = c[i] = a[i];
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < i; j++){
                if(a[j] < a[i]) b[i] = max(b[i], a[i] + b[j]);
            }
        }
        for(int i = n-1; i >= 0; i--){
            for(int j = i+1; j < n; j++){
                if(a[j] < a[i]) c[i] = max(c[i], a[i] + c[j]);
            }
        }
        int ans = -1e9;
        for(int i = 0; i < n; i++) ans = max(ans, b[i] + c[i] - a[i]);
        cout << ans << '\n';
    }
}