#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--){
        long long a, b, x, ans=0;
        cin>>a>>b>>x;
        if(a<b){swap(a, b);}

        while (x>=a){
            if(a>b){swap(a, b);}
            a+=b;
            ans++;
        }
        cout<<ans<<endl;
    }
    
    return 0;
}