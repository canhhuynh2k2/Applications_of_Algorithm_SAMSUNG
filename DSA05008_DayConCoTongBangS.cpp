#include<bits/stdc++.h>
using namespace std;
int main(){
	int t, n, s;
	cin >> t;
	while(t--){
		cin >> n >> s;
		int a[n+1], L[s+1] = {}, Max = 0;
		L[0] = 1;
		for(int i = 1; i <= n; i++) cin >> a[i];
		for(int i = 1; i <= n; i++){
			for(int j = s; j >= a[i]; j--){
				if(L[j] == 0 && L[j - a[i]] == 1) L[j] = 1;
			}
		}
		if(L[s] == 1) cout << "YES\n";
		else cout << "NO\n";
	}
}
