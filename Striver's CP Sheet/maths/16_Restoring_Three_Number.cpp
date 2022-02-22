#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a[4];
    cin>>a[0]>>a[1]>>a[2]>>a[4];
    int m = max({a[0], a[1], a[2], a[3]});
    for(int i=0; i<4; i++){
        if(m - a[i]){
            cout<<(m-a[i])<<" ";
        }
    }
    return 0;
}