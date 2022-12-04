#include<bits/stdc++.h>
using namespace std;
int n;
long long mod = 1e9 + 7;
struct matrix{
	long long Matrix[12][12];
};

matrix operator*(matrix A, matrix B){
	matrix ans;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			ans.Matrix[i][j] = 0;
			for(int d = 0; d < n; d++){
				ans.Matrix[i][j] = (ans.Matrix[i][j] % mod + (A.Matrix[i][d] * B.Matrix[d][j]) % mod) % mod;
			}
		}
	}
	return ans;
}

matrix Pow(matrix A, long long p){
	if(p == 1) return A;
	matrix ans = Pow(A, p/2);
	ans = ans * ans;
	if(p % 2 == 1) ans = ans * A;
	return ans;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		long long p;
		cin >> n >> p;
		matrix C;
		for(int i = 0; i < n; i++)
			for(int j = 0; j < n; j++)
				cin >> C.Matrix[i][j];
		C = Pow(C, p);
		long long sum = 0;
		for(int i = 0; i < n; i++){
			sum = (sum + C.Matrix[i][n-1]) % mod;
		}
		cout << sum << '\n';
	}
}