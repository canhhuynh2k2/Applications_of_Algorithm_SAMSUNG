#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n+1], c[n+1];
	for(int i = 1; i <= n; i++){
		cin >> a[i];
		c[a[i]] = i;
	}
	int Max = 1, cnt = 1;
	for(int i = 1; i < n; i++){
		if(c[i+1] > c[i]) cnt++;
		else{
			Max = max(Max, cnt);
			cnt = 1;
		}
	}
	Max = max(Max, cnt);
	cout << n - Max;
}