#include<bits/stdc++.h>
using namespace std;
int main(){
	int t, n;
	cin >> t;
	while(t--){
		cin >> n;
		long long a[n], b, ans = 0, c, sum;
		priority_queue<int, vector<int>, greater<int> > q;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			q.push(a[i]);
		} 
		while(!q.empty()){
			b = q.top();
			q.pop();
			c = q.top();
			q.pop();
			sum = b + c;
			ans += sum;
			if(q.empty()) break;
			q.push(sum);
		}
		cout << ans << '\n';
	}
}
