#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    set<char> ss;
    for(int i=0; i<s.length(); i++){
        ss.insert(s[i]);
    }
    if(ss.size()&1==0){
        cout<<"CHAT WITH HER!";
    }
    else {
        cout<<"IGNORE HIM!";
    }
    return 0;
}