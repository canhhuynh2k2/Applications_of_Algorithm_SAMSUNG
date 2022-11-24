#include<bits/stdc++.h>
using namespace std;
int di[] = {1, 0, 0, -1};
int dj[] = {0, -1, 1, 0};
int a[10][10], n;
vector<string> vt;
void Try(int x, int y, string s){
    if(x == n-1 && y == n-1){
        vt.push_back(s);
        return;
    } 
    for(int i = 0; i < 4; i++){
        int u = x + di[i];
        int v = y + dj[i];
        if(u >= 0 && u < n && v >= 0 && v < n && a[u][v] == 1){
            a[u][v] = 0;
            if(i == 0) Try(u, v, s + "D");
            else if(i == 1) Try(u, v, s + "L");
            else if(i == 2) Try(u, v, s + "R");
            else if(i == 3) Try(u, v, s + "U");
            a[u][v] = 1;
        }
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        vt.clear();
        cin >> n;
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
                cin >> a[i][j];
        a[0][0] = 0;
        Try(0, 0, "");
        sort(vt.begin(), vt.end());
        if(vt.size() == 0){
            cout << "-1\n";
            continue;
        }
        for(int i = 0; i < vt.size(); i++) cout << vt[i] << ' ';
        cout << '\n';
    }
}