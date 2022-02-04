#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int ans = 0;
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s[0]=='T'){
            ans+=4;
        }
        else if(s[0]=='C'){
            ans+=6;
        }
        else if(s[0]=='O'){
            ans+=8;
        }
        else if(s[0]=='D'){
            ans+=12;
        }
        else{
            ans+=20;
        }
    }
    cout<<ans;
    return 0;
}