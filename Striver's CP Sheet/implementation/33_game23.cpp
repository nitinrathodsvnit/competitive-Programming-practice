#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;
    cin>>a>>b;
    if(b%a!=0){
        cout<<-1;
        return 0;
    }
    int temp = b/a;
    int ans=0;
    while(temp>0 and temp!=1){
        if(temp&1){
            if(temp%3!=0){
                cout<<-1;
                return 0;
            }
            temp/=3;
            ans++;
        }
        else{
            if(temp%2){
                cout<<-1;
                return 0;
            }
            temp/=2;
            ans++; 
        }
    }
    cout<<ans;
    return 0;
}
