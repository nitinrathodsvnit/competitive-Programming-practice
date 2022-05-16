// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
  public:
    int minDist(int a[], int n, int x, int y) {
        // code here
        int ix = -1, iy = -1, i=0, tp = INT_MAX;
        while(i<n){
            if(a[i]==x){
                ix = i;
                if(iy!=-1){
                    tp = min(tp, (ix-iy));
                }
            }
            else if(a[i]==y){
                iy = i;
                if(ix!= -1){
                    tp = min(tp, (iy-ix));
                }
            }
            i++;
        }
        if(tp==INT_MAX){
            return -1;
        }
        return tp;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        int x, y;
        cin >> x >> y;
        Solution obj;
        cout << obj.minDist(a, n, x, y) << endl;
    }
    return 0;
}
  // } Driver Code Ends