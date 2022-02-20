#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    cin>>k;

    sort(a, a+n);
    int s=0, e=n-1;
    while (s<=e){
        int ans = a[s]+a[e];
        if(ans==k){
            cout<<a[s]<<" "<<a[e]<<"\n";
        }
        else if(ans<k){
            s++;
        }
        else{
            e--;
        }
    }
    
    return 0;
}