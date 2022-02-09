#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int sum=n; 
    for(int i=1; i<=n; i++){
        sum+=i*(n-i);
    }
    cout<<sum;
    return 0;
}