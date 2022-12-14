#include<bits/stdc++.h>
using namespace std;
vector<int> a[1005];
bool visited[1005];
int main(){
    int t;
    cin >> t;
    while(t--){
        int V, E, u, v;
        cin >> V >> E >> u >> v;
        for(int i = 1; i <= V; i++){
            visited[i] = false;
            a[i].clear();
        }
        for(int i = 1; i <= E; i++){
            int x, y;
            cin >> x >> y;
            a[x].push_back(y);
        }
        queue<int> q;
        q.push(u);
        visited[u] = true;
        int adj[1005] = {0};
        int ok = 0;
        while(!q.empty()){
            int s = q.front();
            if(s == v){
                ok = 1;
                break;
            }
            q.pop();
            for(int i = 0; i < a[s].size(); i++){
                if(visited[a[s][i]] == false){
                    adj[a[s][i]] = s;
                    q.push(a[s][i]);
                    visited[a[s][i]] = true;
                }
            }
        }
        vector<int> ans;
        if(ok == 1){
            while(adj[v] != 0){
                ans.push_back(v);
                v = adj[v];
            }
            ans.push_back(u);
            for(int i = ans.size() - 1; i >= 0; i--){
                cout << ans[i] << " ";
            }
            cout << "\n";
        }
        else{
            cout << "-1\n";
        }
    }
}