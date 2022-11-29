#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        string x, S, T;
        cin >> n >> S >> T;

        set<string> s;
        for(int i = 0; i < n; i++){
            cin >> x;
            s.insert(x);
        }
        s.erase(S);
        queue<pair<string, int> > q;
        q.push({S, 1});
        while(!q.empty()){
            string ss = q.front().first;
            int cnt = q.front().second;
            q.pop();
            if(ss == T){
                cout << cnt << '\n';
                break;
            }
            cnt++;
            for(int i = 0; i < ss.size(); i++){
                string tmp = ss;
                for(char j = 'A'; j <= 'Z'; j++){
                    tmp[i] = j;
                    if(s.find(tmp) != s.end()){
                        s.erase(tmp);
                        q.push({tmp, cnt});
                    }
                }
            }
        }
    }
}