#include<bits/stdc++.h>
using namespace std;
const long long mod = 1e9+7;
int main(){
	int t, n, x;
	cin >> t;
	while(t--){
		cin >> n;
		long long ans = 0;
		priority_queue<long long, vector<long long>, greater<long long> > p;
		for(int i = 0; i < n; i++){
			cin >> x;
			p.push(x);
		}
		while(p.size() >= 2){
			long long min1 = p.top(); p.pop();
			long long min2 = p.top(); p.pop();
			long long sum = (min1 + min2) % mod;
			ans = (ans + sum) % mod;
			p.push(sum);
		}
		cout << ans << '\n';
	}
}
