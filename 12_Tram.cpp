#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, sum=0, mx=0;
    cin>>t;
    while (t--){
        int a, b;
        cin>>a>>b;
        sum = sum - a + b;
        mx= max(sum, mx);
    }
    cout<<mx<<endl;
    return 0;
}