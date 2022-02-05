#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int fp, n, w, sum=0;
    cin>>fp>>n>>w;
    for(int i=1; i<=w; i++){
        sum = sum + fp*i;
    }
    if(sum<=n){
        cout<<0;
    }
    else{
        cout<<sum-n;
    }
    return 0;
}