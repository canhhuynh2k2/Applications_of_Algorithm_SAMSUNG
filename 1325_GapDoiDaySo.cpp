#include<bits/stdc++.h>
using namespace std;
int solve(int n, long long k){
	long long x = pow(2, n-1);
	if(k == x) return n;
	if(k < x) return solve(n - 1, k);
	return solve(n - 1, k - x);
}
int main(){
	int t, n;
	cin >> t;
	long long k;
	while(t--){
		cin >> n >> k;
		cout << solve(n, k) << '\n';
	}
}
