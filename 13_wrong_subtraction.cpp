#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n;
    cin>>t>>n;
    while (n-- and t>0){
        if(t%10 != 0){
            t--;
        }
        else{
            t=t/10;
        }
    }
    cout<<t<<endl;
    return 0;
}