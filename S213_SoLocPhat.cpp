#include<bits/stdc++.h>
using namespace std;
stack<int> st, s;
int n;
void solve(){
    while(st.size()){
        if(st.top() == 6) st.pop();
        else{
            st.pop();
            st.push(6);
            while(st.size() <= n){ st.push(8);}
            break;
        }
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        int ans = 0;
        for(int i = 1; i <= n; i++){
            st.push(8);
            ans += pow(2, i);
        }
        cout << ans << '\n';
        while(n--){
            while(st.size()){
                while(st.size()){
                    s.push(st.top());
                    st.pop();
                }
                while(s.size()){
                    cout << s.top();
                    st.push(s.top());
                    s.pop();
                }
                cout << ' ';
                solve();
            }
            for(int i = 0; i < n; i++) st.push(8);
        }
        cout << '\n';
    }
}