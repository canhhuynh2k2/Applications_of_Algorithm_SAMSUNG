#include<bits/stdc++.h>
#define ii pair<int, int>
#define vii vector<ii>
using namespace std;
const int N = 505;
const int INF = 1e9;
struct data{
    int w, p, d;
} tmp;
vector<int> a[N];
int n, m, d[N];
int ans, cnt;
void dijikstra(int u){
    priority_queue<ii, vii, greater<ii> > q;
    for(int i = 1; i <= n; i++) d[i] = INF;
    d[u] = 0;
    q.push({0, u});
    while(q.size()){
        ii p = q.top();
        q.pop();
        for(int i : a[p.second]){
            if(d[i] > p.first + 1){
                d[i] = p.first + 1;
                q.push({d[i], i});
            }
        }
    }
    for(int i = 1; i <= n; i++) if(d[i] != INF && d[i] != 0){
        cnt++;
        ans += d[i];
    }    
}
main(){
    int t, u, v;
    cin >> t;
    while(t--){
        for(int i = 1; i <= 500; i++) a[i].clear();
        ans = 0;
        cnt = 0;
        cin >> n >> m;
        for(int i = 1; i <= m; i++){
            cin >> u >> v;
            a[u].push_back(v);
        }
        for(int i = 1; i <= n; i++) dijikstra(i);
        int d = ans;
        cout << fixed << setprecision(2) << double(d) / cnt << '\n';
    }
}