#include<bits/stdc++.h>
using namespace std;
string lower(string s){
    for(int i = 0; i < s.size(); i++){
        s[i] = tolower(s[i]);
    }
    return s;
}
int main(){
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    map<string, int> mp, mp2, mp3;
    string res = "";
    s1 += " ";
    s2 += " ";
    for(int i = 0; i < s1.size(); i++){
        if(s1[i] == ' '){
            if(res.size() > 0){
                res = lower(res);
                mp[res] = 1;
                mp3[res] = 1;
            }
            res = "";
        }
        else{
            res += s1[i];
        }
    }
    res = "";
    for(int i = 0; i < s2.size(); i++){
        if(s2[i] == ' '){
            if(res.size() > 0){
                res = lower(res);
                mp2[res] = 1;
                mp3[res] = 1;
            }
            res = "";
        }
        else{
            res += s2[i];
        }
    }
    for(auto x : mp3){
        cout << x.first << " ";
    }
    cout << '\n';
    for(auto x : mp){
        if(mp2[x.first] != 0){
            cout << x.first << ' ';
        }
    }
}