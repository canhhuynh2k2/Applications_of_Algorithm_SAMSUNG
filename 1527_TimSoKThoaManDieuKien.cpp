#include<bits/stdc++.h>
using namespace std;
int l, r;
bool check(int x){
    int a[6] = {0};
    while(x > 0){
        a[x % 10]++;
        x /= 10;
    }
    for(int i = 0; i <= 5; i++)
        if(a[i] > 1) return false;
    return true;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> l >> r;
        int cnt = 0;
        queue<int> q;
        q.push(1);
        q.push(2);
        q.push(3);
        q.push(4);
        q.push(5);
        while(!q.empty()){
            int d = q.front();
            q.pop();
            if(check(d)){
                if(d >= l && d <= r){
                    //cout << d << ' ';
                    cnt++;
                }
                if(d < r){
                    q.push(d * 10);
                    q.push(d * 10 + 1);
                    q.push(d * 10 + 2);
                    q.push(d * 10 + 3);
                    q.push(d * 10 + 4);
                    q.push(d * 10 + 5);
                }
            }
        }
        cout << cnt << '\n';
    }
}