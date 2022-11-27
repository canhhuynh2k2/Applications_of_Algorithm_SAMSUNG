#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, a[1005], b[1005], ans = 0;
	cin >> n;
	for(int i = 1; i <= n; i++) cin >> a[i];
	b[0] = 0;
	for(int i = 1; i <= n; i++){
		int Max = 0;
		for(int j = 1; j < i; j++){
			if(a[j] < a[i]) Max = max(Max, b[j]);
		}
		b[i] = Max + 1;
		ans = max(b[i], ans);
	}
	cout << ans;
}