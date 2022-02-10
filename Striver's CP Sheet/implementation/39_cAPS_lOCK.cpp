#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    bool a = true;
    for(int i=1; i<s.length(); i++){
        if(s[i]>=97){
            a = false;
        }
    }
    // cout<<a;
    if(a){
        for(int i=0; i<s.length(); i++){
            if(s[i]>=97){
                s[i]-=32;
            }
            else{
                s[i]+=32;
            }
        }
    }
    cout<<s;
    return 0;
}