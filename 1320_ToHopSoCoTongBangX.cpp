#include<bits/stdc++.h>
using namespace std;
int a[25], n, b[25], sum_1 = 0, x, ok;

void Try(int i){
	for(int j = a[i-1]; j <= n; j++){
		a[i] = j;
		sum_1 += b[a[i]];
		if(sum_1 == x){
			ok = 1;
			cout << "[";
			for(int h = 1; h < i; h++)	cout << b[a[h]] << ' ';
			cout << b[a[i]] << "]";
		}
		if(sum_1 < x) Try(i+1);
		sum_1 -= b[a[i]];
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> x;
		ok = 0;
		sum_1 = 0;
		a[0] = 1;
		for(int i = 1; i <= n; i++){
			cin >> b[i];
			a[i] = i;
		}
		Try(1);
		if(!ok) cout << -1;
		cout << '\n';
	}
}
