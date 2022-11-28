#include<bits/stdc++.h>
using namespace std;
int main(){
	int t, n, v;
	cin >> t;
	while(t--){
		cin >> n >> v;
		int a[n+1], c[n+1], L[n+1][n+1] = {}, Max = 0;
		for(int i = 1; i <= n; i++) cin >> a[i];
		for(int j = 1; j <= n; j++) cin >> c[j];
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= v; j++){
				if(a[i] <= j){
					L[i][j] = max(L[i-1][j], c[i] + L[i-1][j - a[i]]);
				}
				else L[i][j] = L[i-1][j];
				Max = max(Max, L[i][j]);
			}
		} 
		cout << Max << '\n';
	}
}