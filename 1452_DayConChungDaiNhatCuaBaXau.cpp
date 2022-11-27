#include<bits/stdc++.h>
using namespace std;
int F[105][105][105];
int main(){
    int t, x, y, z;
    cin >> t;
    while(t--){
        cin >> x >> y >> z;
        string s1, s2, s3;
        memset(F, 0, sizeof(F));
        cin >> s1 >> s2 >> s3;
        for(int i = 1; i <= x; i++){
            for(int j = 1; j <= y; j++){
                for(int d = 1; d <= z; d++){
                    if(s1[i-1] == s2[j-1] && s2[j-1] == s3[d-1])    F[i][j][d] = F[i-1][j-1][d-1] + 1;
                    else F[i][j][d] = max(F[i-1][j][d], max(F[i][j-1][d], F[i][j][d-1]));
                }
            }
        }
        cout << F[x][y][z] << '\n';
    }
}