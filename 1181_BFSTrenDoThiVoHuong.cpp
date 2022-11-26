#include<bits/stdc++.h>
using namespace std;
int V, E;
bool visited[1005];
void BFS(vector<int> a[], int u){
	queue<int> q;
	q.push(u);
	visited[u] = true;
	while(!q.empty()){
		int t = q.front();
		cout << t << ' ';
		q.pop();
		for(int i = 0; i < a[t].size(); i++){
			if(!visited[a[t][i]]){
				visited[a[t][i]] = true;
				q.push(a[t][i]);
			}
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		memset(visited, false, sizeof(visited));
		int u, v, s;
		cin >> V >> E >> s;
		vector<int> a[V+1];
		for(int i = 1; i <= E; i++){
			cin >> u >> v;
			a[u].push_back(v);
			a[v].push_back(u);
		}
		BFS(a, s);
		cout << '\n';
	}
}

