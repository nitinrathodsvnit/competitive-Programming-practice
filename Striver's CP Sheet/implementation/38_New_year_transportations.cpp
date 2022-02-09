#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, a;
    cin>>n>>a; n--;
    int a[n];
    for (int i = 0; i < n; i++){
        // cin>>a[i];
    }
    
    int i=1;
    while (i<=n and i>=a){
        if(i==a){
            cout<<"YES";
            return 0;
        }
        // i += a[i-1];
    }
    
    return 0;
}