#include<bits/stdc++.h>
#define  ii pair<long long,int>
#define int long long
#define vii vector<ii> 
#define N 100005
using namespace std;
const int INF = 1e18+7;
vector<vector<pair<int, int> > > adj;
vii a[N];
int n, m, d[N];
void dijkstra(int be){
	priority_queue< ii, vii, greater<ii> > q;
	for( int i = 1; i <= n; i++) d[i] = INF;
	d[be] = 0;
	q.push( make_pair(0, be));
	while(q.size()){
		int u = q.top().second;
		int du = q.top().first;
		q.pop();
		//cout << u << ' ' <<  du << ' ' << d[u] << '\n';
		//if( du != d[u]) continue;
		for( int i = 0; i < a[u].size(); i++){
			int v = a[u][i].second;
			int dv = a[u][i].first;
			if( d[v] > du + dv){
				d[v] = du + dv;
				q.push({d[v], v});
			}
		}
	}
}
main(){
    int t, s;
    cin >> t;
    while(t--){
        for(int i = 1; i <= 1000; i++) a[i].clear();
        cin >> n >> m >> s;
        for( int i = 1; i <= m; i++){
            int u, v, w;
            cin >> u >> v >> w;
            a[u].push_back(make_pair(w, v));
            a[v].push_back(make_pair(w, u));
        }
        dijkstra(s);
        for( int i = 1; i <= n; i++) cout << d[i] << ' ';
        cout << '\n';
    }
}