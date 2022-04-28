// HQ9+
#include <iostream>
using namespace std;

int main() {
	// your code goes here
    string s;
    cin>>s;
    for(int i=0; i<s.length(); i++){
        if(s[i]=='H' or s[i]=='Q' or s[i]=='9'){
            cout<<"YES\n";
            return 0;
        }
    }
    cout<<"NO\n";
	return 0;
}

