#include <bits/stdc++.h>
using namespace std;
long long a[100];
char solve(int n, long long k){
	if(n == 1) return 'A';
	if(n == 2) return 'B';
	if(k > a[n-2]) return solve(n-1, k - a[n-2]);
	else return solve(n-2, k);
}
int main(){
    int t;
    cin >> t;
    a[1] = 1;
    a[2] = 1;
    for(int i = 3; i < 93; i++) a[i] = a[i-1] + a[i-2];
    while (t--){
        int n;
        long long k;
        cin >> n >> k;
        cout << solve(n, k) << '\n';
    }
}
