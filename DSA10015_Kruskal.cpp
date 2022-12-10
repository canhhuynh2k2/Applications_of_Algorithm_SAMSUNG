#include<bits/stdc++.h>
#define ii pair<int, int>
#define vii vector<ii>
using namespace std;
typedef struct data{
    int x, y, d;
} data;
bool cmp(data b, data c){
    return b.d < c.d;
}

int p[1005];
int find(int xx){
    if(p[xx] == 0) return xx;
    return find(p[xx]);
}
void Union(int u, int v){
    p[v] = u;
}
bool cycle(vector<data> v){
    memset(p, 0, sizeof(p));
    for(int i = 0; i < v.size(); i++){
        int u = find(v[i].x);
        int g = find(v[i].y);
        if(u == g) return true;
        Union(u, g);
    }
    return false;
}
int main(){
    int t, u, v, w, V, E;
    cin >> t;
    while(t--){
        cin >> V >> E;
        vector<data> vt, ans;
        for(int i = 1; i <= E; i++){
            cin >> u >> v >> w;
            vt.push_back({u, v, w});
        }
        sort(vt.begin(), vt.end(), cmp);
        int res = 0;
        for(int i = 0; i < vt.size(); i++){
            ans.push_back(vt[i]);
           if(cycle(ans)) ans.pop_back();
           else res += vt[i].d;
        }
        cout << res << '\n';
    }
}