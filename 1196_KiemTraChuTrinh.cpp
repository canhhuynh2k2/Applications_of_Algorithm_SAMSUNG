#include<bits/stdc++.h>
using namespace std;
vector<int> a[1005];
int visit[1005], ok;
void DFS(int u, int p){
    visit[u] = 1;
    for(auto v : a[u]){
        if(visit[v] == 0) DFS(v, u);
        else if(visit[v] == 1 && v != p){
            ok = 1;
            return;
        }
    }
}
int main(){
    int t, u, v, V, E;
    cin >> t;
    while(t--){
        cin >> V >> E;
        ok = 0;
        memset(visit, 0, sizeof(visit));
        for(int i = 1; i <= 1000; i++) a[i].clear();
        for(int i = 0; i < E; i++){
            cin >> u >> v;
            a[u].push_back(v);
            a[v].push_back(u);
        }
        for(int i = 1; i <= V; i++){
            if(visit[i] == 0) DFS(i, 0);
            if(ok == 1) break;
        }
        if(ok == 1) cout << "YES\n";
        else cout << "NO\n";
    }
}