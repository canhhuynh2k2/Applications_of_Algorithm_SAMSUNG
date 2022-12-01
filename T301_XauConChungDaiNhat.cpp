#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		string s1, s2;
		cin >> s1 >> s2;
		int Max = 0;
		s1 = "0" + s1;
		s2 = "0" + s2;
		int a[s1.size()+1][s2.size()+1] = {};
		for(int i = 1; i < s1.size(); i++){
			for(int j = 1; j < s2.size(); j++){
				if(s1[i] == s2[j]) {
					a[i][j] = a[i-1][j-1] + 1;
				}
				else a[i][j] = max(a[i-1][j], a[i][j-1]);
				Max = max(Max, a[i][j]);
			}
		}
		cout << Max << '\n';
		// Truy van xau con
//		int i = s1.size()-1, j = s2.size() - 1;
//		string ss;
//		while(i > 0 && i > 0){
//			if(s1[i] == s2[j]){
//			 ss += s1[i];
//			i--; j--;}
//			else{
//				if(a[i-1][j] >= a[i][j-1]) i--;
//				else j--;
//			}
//		}
//		cout << ss;
	}
}