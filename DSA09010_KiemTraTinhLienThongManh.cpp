#include<bits/stdc++.h>
using namespace std;
bool visit[1005];
vector<int> a[1005];
int cnt = 0;
void DFS(int u){
    visit[u] = true;
    cnt++;
    for(int i = 0; i < a[u].size(); i++){
        if(visit[a[u][i]] == false) DFS(a[u][i]);
    }
}
int main(){
    int t, V, E, u, v;
    cin >> t;
    while(t--){
        cin >> V >> E;
        int ok = 0;
        for(int i = 1; i < 1005; i++) a[i].clear();
        for(int i = 1; i <= E; i++){
            cin >> u >> v;
            a[u].push_back(v);
        }
        for(int i = 1; i <= V; i++){
            memset(visit, false, sizeof(visit));
            cnt = 0;
            DFS(i);
            if(cnt < V){
                cout << "NO\n";
                ok = 1;
                break;
            }
        }
        if(ok == 0) cout << "YES\n";
    }
}