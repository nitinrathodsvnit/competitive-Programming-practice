#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    int n = s.length();
    for (int i = 0; i < n; i++){
        int temp = s[i] - '0';
        // cout<<temp+2;
        if(i==0 and temp==9){
            cout<<temp;
            continue;
        }
        if(temp>4){
            cout<<9-temp;
        }
        else{
            cout<<temp;
        }
    }
    return 0;
}