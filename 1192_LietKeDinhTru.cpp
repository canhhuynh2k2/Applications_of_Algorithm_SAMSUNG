#include<bits/stdc++.h>
using namespace std;
vector<int> a[1005];
bool visited[1005];
void DFS(int u){
    visited[u] = true;
    for(int i = 0; i < a[u].size(); i++){
        if(visited[a[u][i]] == false) DFS(a[u][i]);
    }
}
int main(){
    int t, V, E, u, v;
    cin >> t;
    while(t--){
        cin >> V >> E;
        vector<int> vt;
        int cnt = 0;
        for(int i = 1; i < 1005; i++) a[i].clear();
        for(int i = 0; i < E; i++){
            cin >> u >> v;
            a[u].push_back(v);
            a[v].push_back(u);
        }
        for(int i = 1; i <= V; i++){
            memset(visited, false, sizeof(visited));
            visited[i] = true;
            cnt = 0;
            for(int j = 1; j <= V; j++){
                if(visited[j] == false){
                    DFS(j);
                    cnt++;
                    if(cnt > 1){
                        vt.push_back(i);
                        break;
                    }
                }
            }
        }
        for(int i = 0; i < vt.size(); i++) cout << vt[i] << ' ';
        cout << '\n';
    }
}