#include<bits/stdc++.h>
using namespace std;
int n;
vector<string> v;
void solve(){
	vector<string> vt;
	vt.push_back("0");
	vt.push_back("1");
	for(int j = 2; j <= n; j++){	
		vector<string> vt2(vt);
		reverse(vt2.begin(), vt2.end());
		for(int i = 0; i < vt2.size(); i++){
			vt[i] = "0" + vt[i];
			vt2[i] = "1" + vt2[i];
		}
		vt.insert(vt.end(), vt2.begin(), vt2.end());
	}
	for(int i = 0; i < vt.size(); i++) cout << vt[i] << ' ';
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		solve();
		cout << '\n';
	}
}
