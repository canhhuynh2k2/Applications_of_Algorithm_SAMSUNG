#include<bits/stdc++.h>
using namespace std;
int n, a[105], b[105];
bool check[105];
void Try(int i){
	for(int j = 1; j <= n; j++){
		if(!check[j]){
			a[i] = j;
			check[j] = true;
			if(i == n){
				for(int h = 1; h <= n; h++) cout << b[a[h]] << ' ';
				cout << '\n';
			}
			else Try(i+1);
			check[j] = false;
		}
	}
}
main(){
	cin >> n;
	for(int i = 1; i <= n; i++)	cin >> b[i];
	sort(b + 1, b+n+1);
	Try(1);
}