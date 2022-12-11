#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    scanf("\n");
    while(t--){
        string s;
        getline(cin, s);
        stack<char> st, st2;
        vector<int> vt;
        int kt[400] = {0};
        stringstream ss(s);
        s = "";
        string str;
        while(ss >> str)    s+= str;
        for(int i = 0; i < s.size(); i++){
            if(s[i] != ' '){
                if(s[i] == '+' || s[i] == '-'){
                    vt.push_back(i);
                }
                else if(s[i] == '('){
                    st.push(i);
                    if(i == 0 || s[i-1] != '-') kt[i] = 1;
                    else if(s[i-1] == '-') kt[i] = -1;
                }
                else if(s[i] == ')'){
                    kt[i] = kt[st.top()];
                    if(vt.size() && vt[vt.size()-1] < st.top()) kt[i] = kt[st.top()] = 1;
                    st.pop();
                }
            }
        }
        for(int i = 0; i < s.size(); i++){
            if(s[i] != ' '){
                if(s[i] == '(' || s[i] == ')'){
                    if(kt[i] == -1) cout << s[i];
                }
                else cout << s[i];
            }
            
        }
        cout << '\n';
        // for(int i = 0;  i < s.size(); i++){
        //     if(s[i] != ' '){
        //         if(s[i] == ')'){
        //             while(!st.empty() && st.top() != '('){
        //                 st2.push(st.top());
        //                 st.pop();
        //             } 
        //             st.pop();
        //             if(st.empty() ||  st.top() == '+' || (!st.empty() && st.top() == '(') || st2.size() == 1){
        //                 while(!st2.empty()){
        //                     st.push(st2.top());
        //                     st2.pop();
        //                 }
        //             } 
        //             else{
        //                 st.push('(');
        //                 while(!st2.empty()){
        //                     st.push(st2.top());
        //                     st2.pop();
        //                 }
        //                 st.push(')');
        //             }
        //         }
        //         else st.push(s[i]);
        //     }
        // }
        // string ss;
        // while(!st.empty()){
        //     ss = st.top() + ss;
        //     st.pop();
        // }
        // cout << ss << '\n';
    }
}