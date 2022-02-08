#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, sum=0;
    cin>>n;
    int a[7];
    for(int i=0;i<7; i++){
        cin>>a[i];
    }
    int i=0; 
    while(n){
        i %= 7;
        n -= a[i];
        n = max(n, 0);
        i++;
    }

    cout<<i;
    return 0;
}