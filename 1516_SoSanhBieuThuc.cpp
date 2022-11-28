#include<bits/stdc++.h>
using namespace std;
string solve(string s){
    stack<char> st, st2;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == ')'){
            while(!st.empty() && st.top() != '('){
                st2.push(st.top());
                st.pop();
            }
            st.pop();
            if(st.empty() || st.top() == '+'){
                if(st2.top() == '+') st2.pop();
                else if(st2.top() == '-') st.pop();
                while(!st2.empty()){
                    st.push(st2.top());
                    st2.pop();
                }
            }
            else if(!st.empty() && st.top() == '-'){
                if(st2.top() == '-'){
                    st.pop();
                    st2.pop();
                    st.push('+');
                }
                else if(st2.top() == '+') st2.pop();
                while(!st2.empty()){
                    if(st2.top() == '-') st.push('+');
                    else if(st2.top() == '+') st.push('-');
                    else st.push(st2.top());
                    st2.pop();
                }
            }
        }
        else st.push(s[i]);
    }
    string ss;
    while(!st.empty()){
        ss = st.top() + ss;
        st.pop();
    }
    return ss;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        string p1, p2;
        cin >> p1 >> p2;
        if(solve(p1) == solve(p2)) cout << "YES\n";
        else cout << "NO\n";
    }
}