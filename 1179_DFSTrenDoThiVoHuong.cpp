#include<bits/stdc++.h>
using namespace std;
bool visited[1005];
int V, E;
vector<int> vv, vt[1005];
void dfs(int u){
	visited[u] = true;
	for(int i = 0; i < vt[u].size(); i++){
		if(!visited[vt[u][i]]){
			vv.push_back(vt[u][i]);
			dfs(vt[u][i]);
		} 
	}
}
int main(){
	int t, u, v, s;
	cin >> t;
	while(t--){
		vv.clear();
		cin >> V >> E >> s;
        for(int i = 0; i <= V; i++){
            vt[i].clear();
            visited[i] = false;
        }
		for(int i = 1; i <= E; i++){
			cin >> u >> v;
			vt[u].push_back(v);
			vt[v].push_back(u);
		}
		vv.push_back(s);
		dfs(s);
		for(int i = 0; i < vv.size(); i++) cout << vv[i] << ' ';
		cout << '\n';
	}
}
