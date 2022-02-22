#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a;
    cin>>a;
    if(a%5==0){
        cout<<a/5;
    }
    else{
        cout<<a/5 + 1;
    }
    return 0;
}