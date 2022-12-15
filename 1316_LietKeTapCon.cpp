#include<bits/stdc++.h>
using namespace std;
string s;
int a[20], n;
vector<string> vt;
void Try(int i){
    for(int j = 0; j <= 1; j++){
        a[i] = j;
        if(i == n - 1){
            string res = "";
            for(int k = 0; k < n; k++){
                if(a[k] == 1){
                    res += s[k];
                }
            }
            if(res.length() > 0) vt.push_back(res);
        }
        else{
            Try(i+1);
        }
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> s;
        memset(a, 0, sizeof(a));
        vt.clear();
        Try(0);
        sort(vt.begin(), vt.end());
        for(string x : vt){
            cout << x << " ";
        }
        cout << "\n";
    }
}