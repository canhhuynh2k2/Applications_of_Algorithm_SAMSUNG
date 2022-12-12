#include<bits/stdc++.h>
using namespace std;
vector<int> vt[1005], ans;
bool visited[1005];
int V, E, u, v, ok = 1;
void dfs(int i){
    if(ok == 0) return;
    visited[i] = true;

    if(i == v){
        for(int k = 0; k < ans.size(); k++){
            cout << ans[k] << " ";
        }
        ok = 0;
        return;
    }
    for(int j = 0; j < vt[i].size(); j++){
        if(visited[vt[i][j]] == false){
            ans.push_back(vt[i][j]);
            dfs(vt[i][j]);
            ans.pop_back();
        }
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        ok = 1;
        ans.clear();
        cin >> V >> E >> u >> v;
        for(int i = 1; i <= V; i++){
            vt[i].clear();
            visited[i] = false;
        }
        for(int i = 0; i < E; i++){
            int s, d;
            cin >> s >> d;
            vt[s].push_back(d);
        }
        ans.push_back(u);
        dfs(u);
        if(ok == 1) cout << "-1";
        cout << "\n";
    }
}