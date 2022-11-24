#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int, int> a, pair<int, int> b){
	return a.second < b.second;
}
int main(){
	int n, t, x;
	cin >> t;
	while(t--){
		cin >> n;
		int a[n], cnt = 1;
		vector<pair<int, int> > vt;
		for(int i = 0; i < n; i++)	cin >> a[i];
		for(int i = 0; i < n; i++){
			cin >> x;
			vt.push_back({a[i], x});
		}
		sort(vt.begin(), vt.end(), cmp);
		int i = 0, j = 1;
		while(i < n - 1 && j < n){
			if(vt[i].second <= vt[j].first){
				cnt++;
				i = j; j++;
			}
			else j++;
		}
		cout << cnt << '\n';
	}
}
