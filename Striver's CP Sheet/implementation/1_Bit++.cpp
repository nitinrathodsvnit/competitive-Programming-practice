#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, ans=0;
    cin>>t;
    while (t--){
        string s;
        cin>>s;
        if(s[0]=='+' or s[1]=='+'){
            ans++;
        }
        else{
            ans--;
        }
    }
    cout<<ans<<endl;
    return 0;
}