#include<bits/stdc++.h>
using namespace std;
int n, a[105], sum = 0, b[105], ok = 0, sum_1 = 0;
void Try(int i){
	for(int j = 0; j <= 1; j++){
		a[i] = j;
		sum_1 += b[i] * a[i];
		if(sum_1 = sum / 2){
			ok = 1;
			return;
		}
		if(sum_1 <= sum / 2 && i <= n) Try(i+1);
		sum_1 -= b[i] * a[i];
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		sum = 0;
		ok = 0;
		cin >> n;
		for(int i = 1; i <= n; i++){
			cin >> b[i];
			sum += b[i];
		}
		if(sum % 2 != 0)	cout << "NO\n";
		else{
			Try(1);
			if(ok) cout << "YES\n";
			else cout << "NO\n";
		}	
	}
}