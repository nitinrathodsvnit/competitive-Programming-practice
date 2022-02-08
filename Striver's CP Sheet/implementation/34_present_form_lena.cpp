#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    string s="";
    for(int i=0; i<=n; i++){
        for(int j=i; j<n; j++){
            cout<<"  ";
        }
        for(int j=0; j<i; j++){
            cout<<j;
            if(i!=j-1){
                cout<<" ";
            }
        }
        for(int j=i; j>=0; j--){
            cout<<j;
            if(j!=0){
                cout<<" ";
            }
        }
        cout<<endl;
    }
    for(int i=0; i<n; i++){
        for(int j=n-i-1; j<n; j++){
            cout<<"  ";
        }
        for(int j=0; j<n-i-1; j++){
            cout<<j;
            if(j!=n-i-1){
                cout<<" ";
            }
        }
        for(int j=n-i-1; j>=0; j--){
            cout<<j;
            if(j!=0){
                cout<<" ";
            }
        }
        cout<<endl;
    }
    
    // cout<<s;
    return 0;
}