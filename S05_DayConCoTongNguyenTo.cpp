#include<bits/stdc++.h>
using namespace std;
int a[20], b[20], n, c[1505];
void solve(){
    int sum = 0;
    for(int i = 1; i <= n; i++){
        if(b[i] == 1) sum += a[i];
    }
    if(c[sum] == 0 && sum > 1){
        for(int i = 1; i <= n; i++) 
            if(b[i] == 1) cout << a[i] << ' ';
        cout << '\n';
    }
}
void Try(int i){
    for(int j = 0; j <= 1; j++){
        b[i] = j;
        if(i == n) solve();
        else Try(i+1);
    }
}
int main(){
    int t;
    cin >> t;
    for(int i = 2; i <= 1505; i++){
        if(c[i] == 0){
            for(int j = i * i; j <= 1505; j+=i){
                c[j] = 1;
            }
        }
    }
    while(t--){
        cin >> n;
        for(int i = 1; i <= n; i++) cin >> a[i];
        sort(a+1, a+n+1, greater<int>());
        Try(1);
    }
}