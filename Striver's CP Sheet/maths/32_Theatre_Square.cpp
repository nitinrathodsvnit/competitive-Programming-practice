#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, n;
    cin>>a>>b>>n;
    if(a<=n or b<=n){
        int temp = max(a, b);
        if(temp%n){
            cout<<temp + 1;
        }
        else{
            cout<<temp;
        }
    }
    else{
        int ans=0;
        int temp = max(a, b);
        if(temp%n){
            ans+=(temp + 1);
        }
        else{
            ans+=temp;
        }
        temp = min(a, b);
        if(temp%n){
            ans+=(temp + 1);
        }
        else{
            ans+=temp;
        }
        cout<<temp;
    }
    return 0;
}