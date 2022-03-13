#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin>>n>>m;
     int lower_bound = (n+1)/2 ;
    int ans = (lower_bound+m-1)/m*m ;
    if(ans>n)
        ans = -1 ;
 
    printf("%d\n", ans) ;
    return 0;
}