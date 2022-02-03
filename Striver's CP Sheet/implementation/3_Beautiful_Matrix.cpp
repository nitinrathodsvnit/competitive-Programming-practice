#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    char s[5][5];
    int ans;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin>>s[i][j];
            if(s[i][j]=='1'){
                ans = abs(i-2) + abs(j-2);
            }
        }
    }
    cout<<ans;
    return 0;
}