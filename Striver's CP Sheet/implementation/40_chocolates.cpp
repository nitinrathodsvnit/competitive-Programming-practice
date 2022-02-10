#include<bits/stdc++.h>
#define int            long long int
using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int pre = a[n-1], sum = a[n-1];
    for(int i=n-2; i>=0; i--){
        if(a[i]>=pre){
            sum+=(pre-1);
            pre = pre - 1;
        }
        else{
            sum+=(a[i]);
            pre = a[i];
        }
        if(pre<=0){break;}
    }
    cout<<sum;
    return 0;
}