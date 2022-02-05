#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    if(s[0]>96){
        s[0]+=32;
    }
    cout<<s;
    return 0;
}