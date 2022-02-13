#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, sum=0;
    cin>>n;  int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];sum+=a[i];
    }
    sort(a, a+n);
    int tsum=0, ans=0;
    for(int i=n-1; tsum<=(sum/2); i--){
        tsum +=a[i]; ans++;
    }
    cout<<ans;

    return 0;
}