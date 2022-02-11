#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, p, nx;
    cin>>n>>p>>nx;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        int y=p, x=nx;
        bool b = true;
        if(i<n-1){
            for(int j=i; j<n-1 and x--; j++){
                if(a[i]>a[j+1]){
                    b = false;
                    break;
                }
            }
        }
        if(i>0 and b){
            for(int j=i; j>0 and y--; j--){
                if(a[i]>a[j-1]){
                    b = false;
                    break;
                }
            }
        }
        
        if(b){
            cout<<(i+1);
            return 0;
        }
    }

    return 0;
}