#include<iostream>
using namespace std;
string s;
int i;
void Back(){
    i = s.size() - 1;
    while(i > 0){
        if(s[i] == '0'){
            s[i] = '1';
            i--;
        }
        else{
            s[i] = '0';
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
        Back();
       // cout << s << '\n';
        if(i != 0){
            s.erase(0, 1);
            cout << s << '\n';
        } 
        else{
            s.erase(0, 1);
            cout << s << '\n';
        }
    }
}