#include<bits/stdc++.h>
#define ii pair<int, int>
#define vii vector<ii>
using namespace std;
int main(){
    int t, n, k;
    cin >> t;
    while(t--){
        string s;
        cin >> k >> s;
        long long ans = 0;
        int a[100] = {0};
        priority_queue<long long> q;
        for(int i = 0; i < s.size(); i++){
            a[s[i]]++;
        }
        for(int i = 'A'; i <= 'Z'; i++) 
            if(a[i] != 0) q.push(a[i]);
        while(!q.empty() && k > 0){
            int d = q.top();
            q.pop();
            q.push(d-1);
            k--;
        }
        while(!q.empty()){
            ans += q.top() * q.top();
            q.pop();
        }
        cout << ans << '\n';
    }
}