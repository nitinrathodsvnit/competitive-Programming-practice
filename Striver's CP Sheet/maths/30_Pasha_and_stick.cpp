#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    if(n&1){cout<<0;}
    else if(n<6){cout<<0;}
    else{
        n/=2;
        cout<<(n-1)/2;
    }

    return 0;
}