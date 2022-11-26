#include<bits/stdc++.h>
using namespace std;
int n, m;
int main(){
	int t, u, v, q;
	cin >> t;
	while(t--){
		cin >> n >> m;
		vector<int> a[n+1];
		int Parent[n+1];
		for(int i = 1; i <= m; i++){
			cin >> u >> v;
			a[u].push_back(v);
			a[v].push_back(u);
		}
		cin >> q;
		while(q--){
			cin >> u >> v;
			stack<int> st;
			st.push(u);
			int check[n+1] = {0}, ok = 0;
			check[u] = 1;
			while(st.size()){
				int f = st.top();
				if(f == v){
					ok = 1;
					break;
				}
				st.pop();
				for(int i = 0; i < a[f].size(); i++){
					if(check[a[f][i]] == 0){
						check[a[f][i]] = 1;
						st.push(f);
						st.push(a[f][i]);
					}
				}
			}
			if(ok) cout << "YES\n";
			else cout << "NO\n";
		}
	}
}