#include<bits/stdc++.h>
using namespace std;
int a[100005], Max[100005], Min[100005];
int n, ok;
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		ok = 0;
		Max[0] = -1e9 - 5;
		Min[n+1] = 1e9+5;
		int  cnt = 0;
		vector<int> vt;
		//multiset<int> s1, s2;
		for(int i = 1; i <= n; i++){
			cin >> a[i];
			if(a[i] > Max[i-1]) Max[i] = a[i];
			else Max[i] = Max[i-1];
		}
		for(int i = n; i >= 0; i--){
			if(a[i] < Min[i+1]) Min[i] = a[i];
			else Min[i] = Min[i+1];
		}
		for(int i = 1; i < n; i++){
			if(Max[i] <= Min[i+1]){
				cnt++;
				vt.push_back(i);
			}
		}
//		for(int i = 1; i <= n; i++){
//			s2.insert(a[i]);
//			s1.erase(s1.find(a[i]));
//			if(*s1.rbegin() < *s2.begin()){
//				cnt++;
//				vt.push_back(i+1);
//			}
//		}
//		for(int i = 0; i < n - 1; i++){
//			ok = 0;
//			for(j = i + 1; j < n; j++){
//				if(a[j] < a[i]){
//					ok = 1;
//					break;
//				}
//			}
//			if(!ok){
//				cnt++;
//				vt.push_back(i+1);
//			} 
//		}
		cout << cnt << '\n';
		for(int i = 0; i < vt.size(); i++) cout << vt[i] << ' ';
		cout << '\n';
	}
}