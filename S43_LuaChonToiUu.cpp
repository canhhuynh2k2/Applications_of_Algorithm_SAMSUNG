#include<bits/stdc++.h>
using namespace std;
bool  cmp(pair<int, int> a, pair<int, int> b){
	return a.second < b.second;
}
int main(){
	int t, n, u, v;
	cin >> t;
	while(t--){
		cin >> n;
		int ans = 1;
		vector<pair<int, int> > vt;
		for(int i = 0; i < n; i++){
			cin >> u >> v;
			vt.push_back({u, v});
		}
		sort(vt.begin(), vt.end(), cmp);
		int i = 0, j = 1;
		while(i < n && j < n){
			if(vt[i].second <= vt[j].first){
				i = j; j++;
				ans++;
			}
			else j++;
		}
		cout << ans << '\n';
	}
}
