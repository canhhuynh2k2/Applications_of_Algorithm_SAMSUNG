#include<bits/stdc++.h>
using namespace std;
int a[1005], n, k;
void Sinh(){
	int i = k;
	while(a[i] == a[i-1] + 1) i--;
	if(i == 0){
		for(int j = 1; j <= k; j++) a[j] = n - k + j;
		return;
	}
	a[i]--;
	for(int j = i + 1; j <= k; j++) a[j] = n - k + j;	
}
int main(){
	int t;
	cin >> t;
	while(t--){
		a[0] = 0;
		cin >> n >> k;
		for(int i = 1; i <= k; i++) cin >> a[i];
		Sinh();
		for(int i = 1; i <= k; i++) cout << a[i] << ' ';
		cout << '\n'; 
		
	}
}
