#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        int a, b, c, ans=0;
        cin>>a>>b>>c;
        if(a<b){swap(a,b);}
        while (a>c){
            b+=a;
            if(a<b){swap(a, b);}
        }
        cout<<ans<<endl;
    }
    return 0;
}