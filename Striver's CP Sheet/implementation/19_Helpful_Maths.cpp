#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    int a[3]={0};
    for(int i=0; i<s.length(); i+=2){
        if(s[i]=='1'){
            a[0]++;
        }
        else if(s[i]=='2'){
            a[1]++;
        }
        else{
            a[2]++;
        }
    }
    for(int i=0; i<s.length(); i++){
        if(a[0]--){
            s[i]='1';
            s[i+1]='+';i++;
        }
        else if(a[1]--){
            s[i]='2';
            s[i+1]='+';i++;
        }
        else{
            s[i]='3';
            s[i+1]='+';i++;
        }
    }
    // s[s.length()] = '\0';
    cout<<s;
    return 0;
}