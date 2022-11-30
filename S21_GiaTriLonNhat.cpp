#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, x; long long ans = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x;
        ans += x + abs(x);
    }
    cout << ans << '\n';
}