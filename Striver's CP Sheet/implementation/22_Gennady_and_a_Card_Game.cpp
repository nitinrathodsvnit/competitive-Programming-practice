#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    for(int i=0;i<5;i++){
        string a;
        cin>>a;
        if(a[0]==s[0] or a[1]==s[1]){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}