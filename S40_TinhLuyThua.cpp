#include<bits/stdc++.h>
using namespace std;
const long long mod = 1e9 + 7;
long long exp(long long a, long long b){
	if(b == 0) return 1;
	long long x = exp(a, b / 2) % mod;
	if(b % 2 == 0)	return x * x % mod;
	else return (((a * x) % mod) * x) % mod;
}
int main(){
	long long a, b;
	while(1){
		cin >> a >> b;
		if(a == 0 && b == 0) break;
		cout << exp(a, b) << '\n';
	}
}
