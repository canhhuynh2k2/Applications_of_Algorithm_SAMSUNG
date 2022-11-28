#include<bits/stdc++.h>
using namespace std;
bool isNum(string s){
    for(int i = 0; i < s.size(); i++) 
        if(s[i] < '0' || s[i] > '9') return false;
    return true;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        stack<string> st;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == ']'){
                string ss;
                while(!st.empty() && st.top() != "["){
                    ss  = st.top() + ss;
                    st.pop();
                }
                st.pop();
                if(st.empty() || !isNum(st.top())) st.push(ss);
                else{
                    int k = 0,  p = 1;
                    while(!st.empty() && isNum(st.top())){
                        k = k + (st.top()[0] - 48) * p;
                        p *= 10;
                        st.pop();
                    }
                    string str;
                    for(int j = 0; j < k; j++) str = str + ss;
                    st.push(str);
                }
            }
            else st.push(string(1, s[i]));
        }
        string ans;
        while(!st.empty()){
            ans = st.top() + ans;
            st.pop();
        }
        cout << ans << '\n';
    }
} 