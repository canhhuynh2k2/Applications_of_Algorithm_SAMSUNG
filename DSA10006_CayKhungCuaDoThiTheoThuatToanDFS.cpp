#include<bits/stdc++.h>
using namespace std;
vector<int> a[1005];
vector<pair<int, int> > ans;
int visit[1005];
void DFS(int u, int p){
    visit[u] = 1;
    ans.push_back({u, p});
    for(int x : a[u]){
        if(visit[x] == 0) DFS(x, u);
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        memset(visit, 0, sizeof(visit));
        ans.clear();
        for(int i = 1; i <= 1000; i++) a[i].clear();
        int n, m, u, x, y;
        cin >> n >> m >> u;
        for(int i = 0; i < m; i++){
            cin >> x >> y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        DFS(u, 0);
        if(ans.size() == n){
            for(auto i = 1; i < n; i++) cout << ans[i].second << ' ' << ans[i].first << '\n';
        }
        else cout << "-1\n";
    }
}