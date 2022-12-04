#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b; long long ans = 0;
    
    cin >> a >> b;
    queue<long long> st;
    vector<long long> vt;
    st.push(4);
    st.push(7);
    while(!st.empty()){
        long long d = st.front();
        vt.push_back(d);
        st.pop();
        if(d > 1000000001){
            break;
        }
        st.push(d * 10 + 4);
        st.push(d * 10 + 7);
    }
    // int i= 0;
    //for(int j = 0; j < vt.size(); j++) cout << vt[j] << ' ';
    // for(i = 0; i < vt.size(); i++){
    //     if(vt[i] >= a && vt[i] <= b){
    //         ans = vt[i];
    //         break;
    //     }
    // }
    // while(vt[i] <= b){
    //     ans += vt[i] * (vt[i] - a);
    //     a = vt[i];
    //     i++;
    // }
    int d = 0;
    for(int i = a; i <= b; i++){
        while(vt[d] < i) d++;
        ans += vt[d];
    }
    cout << ans;
}