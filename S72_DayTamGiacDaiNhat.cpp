#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while (t--){
		int n, s = 0;
		cin >> n;
		int a[n + 1], Max[n + 1], Min[n + 1];
		Max[n] = Min[n] = n;
		for (int i = 1; i <= n; i++)	cin >> a[i];
		for (int i = n - 1; i >= 1; i--){
			if (a[i] > a[i + 1])
				Min[i] = Min[i + 1];
			else	Min[i] = i;
			if (a[i] < a[i + 1])	Max[i] = Max[i + 1];
			else	Max[i] = i;
		}
		for (int i = 1; i <= n; i++){
			s = max(s, Min[Max[i]] - i + 1);
		}
		cout << s << '\n';
	}
}