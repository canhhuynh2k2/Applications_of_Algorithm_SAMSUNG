#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, n, a[100005], k;
    cin >> t;
    multiset<int> s;
    while(t--){
        cin >> n >> k;
        for(int i = 0; i < n; i++) cin >> a[i];
        s.clear();
        for(int i = 0; i < k; i++){
        	s.insert(a[i]);
		}
        cout << *s.rbegin() << ' ';
        for(int i = k; i < n; i++){
            s.erase(s.find(a[i-k]));
            s.insert(a[i]);
            cout << *s.rbegin() << ' ';
        }
        cout << '\n';
    }
}

