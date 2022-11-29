#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        queue<long long> q;
        q.push(1);
        while(q.size()){
            long long tmp = q.front();
            q.pop();
            if(tmp % n == 0){
                cout << tmp << '\n';
                break;
            }
            q.push(tmp * 10);
            q.push(tmp * 10 + 1);
        }
    }
}