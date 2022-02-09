#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;
    cin>>a>>b;
    if(b>a){
        cout<<-1;
    }
    else{
        if(b>=(a/2)){
            cout<<b;
        }
        else{
            cout<<((a/2) + (b - (a/2)%b));
        }
    }
    return 0;
}