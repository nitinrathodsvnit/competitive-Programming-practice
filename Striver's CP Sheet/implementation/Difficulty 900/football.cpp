#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    int z=0, o=0;
    for(int i=0; i<s.length(); i++){
        if(s[i]=='0'){
            z++;
            o=0;
        }
        else{
            o++;
            z=0;
        }
        if(z>6 or o>6){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}