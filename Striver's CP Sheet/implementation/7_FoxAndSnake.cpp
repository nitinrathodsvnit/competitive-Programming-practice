// https://codeforces.com/problemset/problem/510/A

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin>>n>>m;
    // bool aa = false;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(i%2==0){
                cout<<"#";
            }
            else{
                if( (i+1)%4 ==0 and j==0){
                    cout<<"#";
                }
                else if((i+1)%4 ==2 and j==m-1){
                    cout<<"#";
                }
                else{
                    cout<<".";
                }
                
            }
        }
        cout<<endl;
    }
    return 0;
}