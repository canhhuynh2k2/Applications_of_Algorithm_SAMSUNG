#include<bits/stdc++.h>
using namespace std;
char c;
int k, check[30], a[30];
void Try(int i){
    for(int j = a[i-1]; j <= c; j++){
        a[i] = j;
        if(i == k){
            for(int h = 1; h <= k; h++) cout << (char)a[h];
            cout << '\n';
        }
        else Try(i+1);
    }
}
int main(){
    cin >> c >> k;
    a[0] = 65;
   // for(int i = 1; i <= c - 65 + 1; i++) a[i] = i + 65 - 1;
    Try(1);
}