// isdigit(exp[i])  --> a char is digit or  not check funtions
//

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Function to evaluate a postfix expression.
    int evaluatePostfix(string s)
    {
        // Your code here
        stack<int> st;
        int n = s.length();
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '*')
            {
                int n1 = st.top() - '0';
                st.pop();
                int n2 = st.top() - '0';
                st.pop();
                int p = n1 * n2;
                st.push((p + '0'));
            }
            else if (s[i] == '/')
            {
                int n1 = st.top() - '0';
                st.pop();
                int n2 = st.top() - '0';
                st.pop();
                int p = n2 / n1;
                st.push((p + '0'));
            }
            else if (s[i] == '+')
            {
                int n1 = st.top() - '0';
                st.pop();
                int n2 = st.top() - '0';
                st.pop();
                int p = n1 + n2;
                st.push((p + '0'));
            }
            else if (s[i] == '-')
            {
                int n1 = st.top() - '0';
                st.pop();
                int n2 = st.top() - '0';
                st.pop();
                int p = n2 - n1;
                st.push((p + '0'));
            }
            else
            {
                st.push(s[i]);
            }
        }
        int ans = st.top() - '0';
        return ans;
    }
};

// { Driver Code Starts.

// Driver program to test above functions
int main()
{
    int t;
    cin >> t;
    cin.ignore(INT_MAX, '\n');
    while (t--)
    {
        string S;
        cin >> S;
        Solution obj;

        cout << obj.evaluatePostfix(S) << endl;
    }
    return 0;
}
// } Driver Code Ends