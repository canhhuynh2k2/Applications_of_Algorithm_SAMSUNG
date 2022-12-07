#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
long long a[100005];
int tmp = 0;
bool binS(int l, int r, int m, long long x){
    if(l > r) return false;
    int mid  = (l + r) / 2;
    if(a[mid] - a[m-1] == x) return true;
    else if(a[mid] - a[m-1] > x){
        return binS(l, mid-1, m, x);
    }
    else return binS(mid + 1, r, m, x);
}
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n, l, r, x, ok = 0;
        long long k;
        cin >> n >> k;
        a[0] = 0;
        for (int i = 1; i <= n; i++){
            cin >> a[i];
            a[i] += a[i - 1];
        }
        for (int i = 1; i <= n; i++){
            if(binS(i, n, i, k)){
                ok = 1;
                break;
            }
        }
        if (ok)    cout << "YES" << endl;
        else    cout << "NO" << endl;
    }
}