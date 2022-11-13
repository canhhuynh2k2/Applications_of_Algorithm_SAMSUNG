#include<bits/stdc++.h>
using namespace std;
int n, k = 0, a[50];
void in(int m){
	cout << "(";
	for(int i = 1; i < m; i++) cout << a[i] << ' ';
	cout << a[m] << ") ";
}
void solve(int x, int i, int s){
	int j;
	for(j = x; j >= 1; j--){
		a[i] = j;
		if(j == s) in(i);
		else if(j < s) solve(j, i+1, s-j);
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		solve(n, 1, n);
		cout << '\n';
	}
}

