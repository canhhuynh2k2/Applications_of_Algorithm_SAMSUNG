#include<bits/stdc++.h>
using namespace std;
vector<int> a[1005];
vector<pair<int, int> > ans;
int visit[1005];
void DFS(int u){
    queue<pair<int, int> > q;
    q.push({u, 0});
    visit[u] = 1;
    while(q.size()){
        int tmp = q.front().first;
        int tmp2 = q.front().second;
        ans.push_back({tmp, tmp2});
        q.pop();
        for(int x : a[tmp]){
            if(visit[x] == 0){
                visit[x] = 1;
                q.push({x, tmp});
            }
        }
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
        DFS(u);
        if(ans.size() == n){
            for(auto i = 1; i < n; i++) cout << ans[i].second << ' ' << ans[i].first << '\n';
        }
        else cout << "-1\n";
    }
}