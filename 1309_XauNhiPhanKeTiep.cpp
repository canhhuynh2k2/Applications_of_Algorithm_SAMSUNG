#include<iostream>
using namespace std;
string s;
int i;
void Next(){
    i = s.size() - 1;
    while(i > 0){
        if(s[i] == '1'){
            s[i] = '0';
            i--;
        }
        else{
            s[i] = '1';
            break;
        }
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> s;
        s = "0" + s;
        Next();
        if(i != 0){
            s.erase(0, 1);
            cout << s << '\n';
        } 
        else cout << s << '\n';
    }
}