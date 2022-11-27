#include<iostream>
#define mod 1000000007
using namespace std;
struct matrix{
	long long a[3][3];
};
matrix mulMatrix( matrix A, matrix B){
	matrix ans;
	for( int i = 1; i <= 2; i++)
		for( int j = 1; j <= 2; j++){
			long long sum = 0;
			for( int k = 1; k <= 2; k++){
				sum = ( sum % mod + A.a[i][k] * B.a[k][j] % mod) % mod;
			}
			ans.a[i][j] = sum;
		}
	return ans;
}
matrix powMatrix( matrix A, long long p){
	if( p == 1) return A;
	matrix ans = powMatrix( A, p/2);
	ans = mulMatrix( ans, ans);
	if( p % 2 != 0)	ans = mulMatrix( ans, A);
	return ans;
}	
int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		matrix A;
		A.a[1][1] = 1;
		A.a[1][2] = 1;
		A.a[2][1] = 1;
		A.a[2][2] = 0;
		cin >> n;
		matrix ans = powMatrix( A, n-1);
		cout << (ans.a[1][1]) % mod << '\n';
	}
}
