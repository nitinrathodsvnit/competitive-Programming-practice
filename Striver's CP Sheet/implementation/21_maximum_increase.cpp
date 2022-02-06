#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, c=1, m=0;
    cin>>n;
    int a[n];
    cin>>a[0];
    for(int i=1; i<n; i++){
        cin>>a[i];
        if(a[i]>a[i-1]){
            c++;
        }
        else{
            c=1;
        }
        m = max(m ,c);
    }
    cout<<m;
    return 0;
}