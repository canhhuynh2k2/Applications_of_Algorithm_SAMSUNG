#include<bits/stdc++.h>
using namespace std;
int F[1005][1005];
int main(){
    int t;
    cin >> t;
    while(t--){
        memset(F, 0, sizeof(F));
        string s1, s2;
        cin >> s1 >> s2;
        for(int i = 0; i < s1.size(); i++){
            for(int j = 0; j < s2.size(); j++){
                if(s1[i] == s2[j]) F[i+1][j+1] = F[i][j] + 1;
                else F[i+1][j+1] = max(F[i][j+1], F[i+1][j]);
            }
        }
        cout << F[s1.size()][s2.size()] << '\n';
    }
}