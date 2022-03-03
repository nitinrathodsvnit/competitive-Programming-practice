#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int a[n][3];
    for(int i=0; i<n; i++){
        cin>>a[i][0]>>a[i][1]>>a[i][2];
    }
    for(int i=0; i<3; i++){
        int sum=0;
        for(int j=0; j<n; j++){
            sum+=a[j][i];
        }
        if(sum){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}