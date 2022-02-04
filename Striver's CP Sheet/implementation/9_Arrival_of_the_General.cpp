#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, minidx=INT_MAX, maxidx=INT_MIN;
    cin>>n;
    vector<int> v;
    v.reserve(n);
    for(int i=0; i<n; i++){
        int temp; cin>>temp;
        v.push_back(temp);
        if(minidx>=temp){
            minidx = i;
        }
        if(maxidx<temp){
            maxidx=i;
        }
    }
    int ans = maxidx + ((n-1) - minidx);
    if(maxidx>minidx){
        ans--;
    }
    cout<<ans;
    return 0;
}