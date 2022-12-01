#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long F[25] = {0}, G[25] = {0};
        long long ans = 0;
        string s;
        cin >> s;
        s = "0" + s;
        for(int i = 1; i < s.size(); i++){
            G[i-1] = F[i-1];
            for(int j = i; j < s.size(); j++){
                G[j] = F[j];
                F[j] = G[j-1] * 10 + s[j] - 48;
                ans += F[j];
            }
        }
        cout << ans << '\n';
    }
}