#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int a[n], ans[n];
       // pair<int, int> ans[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        stack<pair<int, int> > st;
        st.push({1, -1});
        for(int i = 0; i < n; i++){
            if(a[i] < st.top().first) ans[i] = i - st.top().second;
            else{
                while(!st.empty() && st.top().first <= a[i]) st.pop();
                if(st.empty()) st.push({1, -1});
                ans[i] = i - st.top().second;
            }
            st.push({a[i], i});
        }
        for(int i = 0; i < n; i++) cout << ans[i] << ' ';
        cout << '\n';
    }
}