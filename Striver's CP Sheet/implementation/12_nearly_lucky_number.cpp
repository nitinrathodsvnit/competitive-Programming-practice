#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int c=0;
    int n;
    cin>>n;
    string s = to_string(n);
    for(int i=0; i<s.length(); i++){
        if(s[i]=='4' or s[i]=='7'){
            c++;
        }
    }
    if(c==4 or c==7){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}