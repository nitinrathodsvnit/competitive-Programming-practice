#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin>>n;
    string s; cin>>s;
    int a[32]={0};
    for(int i=0; i<s.length(); i++){
        a[s[i]-97]++;
    }
    for(int i=0; i<32; i++){
        if(a[i]%n!=0){
            cout<<-1;
            return 0;
        }
    }

    while (n--){
        for(int i=0; i<32; i++){
            if(a[i]!=0){
                cout<<char('a'+i);
            }
        }
    }

    return 0;
}