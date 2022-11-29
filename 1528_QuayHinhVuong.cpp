#include<bits/stdc++.h>
using namespace std;
int L[] = {3, 0, 2, 4, 1, 5};
int R[] = {0, 4, 1, 3, 5, 2};
string Left(string s){
    string ans;
    for(int i = 0; i < 6; i++) ans += s[L[i]];
    return ans;
}

string Right(string s){
    string ans;
    for(int i = 0; i < 6; i++) ans += s[R[i]];
    return ans;
}
int main(){
    int t, x;
    cin >> t;
    while(t--){
        string S, T;
        for(int i = 1; i <= 6; i++){
            cin >> x;
            S += to_string(x);
        }
        for(int i = 1; i <= 6; i++){
            cin >> x;
            T += to_string(x);
        }
        queue<pair<string, int> > q;
        q.push({S, 0});
        while(!q.empty()){
            string s = q.front().first;
            int d = q.front().second;
            q.pop();
            d++;
            string s1 = Left(s);
            string s2 = Right(s);
            if(s1 == T || s2 == T){
                cout << d << '\n';
                break;
            }
            q.push({s1, d});
            q.push({s2, d});
        }
    }
}