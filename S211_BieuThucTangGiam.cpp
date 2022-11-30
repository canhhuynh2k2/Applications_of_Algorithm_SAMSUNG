#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, d = 1;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        stack<int> st;
        cout << "Test " << d++ << ": ";
        st.push(1);
        for(int i = 0; i < s.size(); i++){
            if(s[i] == 'D') st.push(i+2);
            else{
                while(!st.empty()){
                    cout << st.top();
                    st.pop();
                }
                st.push(i+2);
            }
        }
        while(!st.empty()){
            cout << st.top();
            st.pop();
        }
        cout << '\n';
    }
}