
#include <bits/stdc++.h>
using namespace std;

void fun(){
    int n;
    cin>>n;
    int a[n];
    int e=0, o=0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i]&1){o++;}
        else{e++;}
    }
    if(e%2==0 and o%2==0){
        cout<<"YES\n";
        return;
    }
    sort(a, a+n);
    for(int i=0; i<n; i++){
        if(abs(a[i]-a[i+1])==1){
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";
}

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        fun();
    }
	return 0;
}

