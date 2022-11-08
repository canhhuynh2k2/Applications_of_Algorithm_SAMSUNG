#include<iostream>
using namespace std;
int t, n, k, a[1005], ok = 1;
void Next(){
    int i = k;
    while(a[i] == n - k + i) i--;
    a[i]++;
    if(i == 0) ok = 0;
    for(int j = i + 1; j <= n; j++) a[j] = a[i] + j - i;
}
int main(){
    cin >> t;
    while(t--){
        cin >> n >> k;
        for(int i = 1; i <= k; i++) cin >> a[i];
        for(int i = k + 1; i <= n; i++) a[i] = a[i-1] + 1;
        Next();
        if(ok) for(int i = 1; i <= k; i++) cout << a[i] << ' ';
        else for(int i = 1; i <= k; i++) cout << i << ' ';
        cout << '\n';
    }
}