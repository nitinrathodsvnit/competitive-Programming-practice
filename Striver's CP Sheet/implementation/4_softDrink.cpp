#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
 
    int totalDrink = k * l;
 
    int toast = totalDrink / nl;
 
    int totalLimes = c * d;
 
    int saltNeed = p / np;
 
    cout << min(toast, min(totalLimes, saltNeed)) / n;
    return 0;
}