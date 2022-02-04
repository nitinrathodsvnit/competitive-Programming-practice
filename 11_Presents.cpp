#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        int t;cin>>t;
        t--;
        a[t] = i+1;
    }
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}