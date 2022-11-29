#include<bits/stdc++.h>
using namespace std;
int n, x1, x2, y_1, y2;
int di[] = {1, 0, -1, 0};
int dj[] = {0, 1, 0, -1};
char a[105][105];
struct data{
    int x, y, d;
};
void solve(){
    queue<struct data> q;
    struct data g, h, k;
    int check[105][105] = {0};
    g.x = x1;
    g.y = y_1;
    check[x1][y_1] = 1;
    g.d = 0;
    q.push(g);
    while(!q.empty()){
        h = q.front();
        q.pop();
        k.d = h.d + 1;
        if(h.x == x2 && h.y == y2){
            cout << h.d << '\n';
            break;
        }
        for(int i = 0; i < 4; i++){
            k.x = h.x + di[i];
            k.y = h.y + dj[i];
            while(k.x >= 0 && k.y < n && k.x >= 0 && k.y < n && check[k.x][k.y] == 0 && a[k.x][k.y] == '.'){
                q.push(k);
                check[k.x][k.y] = 1;
                k.x += di[i];
                k.y += dj[i];
            }
        }
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin >> a[i][j];
            }
        }
        cin >> x1 >> y_1 >> x2 >> y2;
        solve();
    }
}