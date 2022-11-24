#include<iostream>
using namespace std;
int t, n, a[1005], ok = 1;
void Sinh(){
    int i = n - 1;
    while(a[i] < a[i+1]) i--;
    if(i == 0){
        ok = 0;
        return;
    }
    int k = n;
    while(k > i && a[i] < a[k]) k--;
    swap(a[k], a[i]);
    int r = i + 1, l = n;
    while(r <= l){
        swap(a[r], a[l]);
        r++; l--;
    }
}
int main(){
    cin >> t;
    while(t--){
        ok = 1;
        cin >> n;
        a[0] = 1e9;
        for(int i = 1; i <= n; i++) a[i] = n - i + 1;
        while(ok){
            for(int i = 1; i <= n; i++) cout << a[i];
            cout << ' ';
            Sinh();
        }
        cout << '\n';
    }
}