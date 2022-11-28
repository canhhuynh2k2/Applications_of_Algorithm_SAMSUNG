#include<bits/stdc++.h>
using namespace std;
int F[1005][1005];
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int Max = 1;
        memset(F, 0, sizeof(F));
        for(int i = 0; i <= s.size(); i++) F[i][i] = 1;
        for(int i = 1; i < s.size(); i++){
            for(int j = 0; j < s.size() - i; j++){
                int k = i + j;
				F[j][k] = ((j + 1 > k - 1 || F[j + 1][k - 1]) && s[j] == s[k]);
				if (F[j][k])	Max = i + 1;
            }
        }
        cout << Max << "\n";
    }
}