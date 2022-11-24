#include<bits/stdc++.h>
using namespace std;
int n, k, a[20], b[20];
void out(){
    for(int i = 1; i <= k; i++) cout << a[b[i]] << ' ';
    cout << '\n';
}
void Try(int i){
    for(int j = b[i-1] + 1; j <= n - k + i; j++){
        b[i] = j;
        if(i == k) out();
        else Try(i+1);
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> k;
        for(int i = 1; i <= n; i++) cin >> a[i];
        sort(a+1, a+n+1);
        Try(1);
    }
}