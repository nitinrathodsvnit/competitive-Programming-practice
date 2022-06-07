#include<bits/stdc++.h>

#define int            long long int
using namespace std;

const int N = 200005;
int pow(int x, unsigned int y)
{
    int temp;
    if( y == 0)
        return 1;
    temp = power(x, y / 2);
    if (y % 2 == 0)
        return temp * temp;
    else
        return x * temp * temp;
}
void solve(){
    string x, y;
    cin>>x>>y;
    if(y=="a"){
        cout<<1<<endl;return;
    }
    for(auto i:y){
        if(i=='a'){
            cout<<-1<<endl;
            cout<<-1<<endl;
            return;
        }
    }
    cout<<<<endl;
}

int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;
    while (t--) solve();
    return 0;
}