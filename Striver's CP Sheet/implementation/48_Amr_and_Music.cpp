#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, day;
    cin>>n>>day;
    multimap<int, int> m;
    vector<int> v;
    for(int i=1; i<=n; i++){
        int temp; cin>>temp;
        m.insert({temp, i});
    }
    if(m.begin()->first > day){
        cout<<0;
        return 0;
    }
    int i=0;
    for(auto it = m.begin(); it->first <= day and i<n; it++, i++){
        // cout<<it->second<<" ";
        v.push_back(it->second);
        day = day - it->first;
    }
    cout<<v.size()<<endl;
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    return 0;
}