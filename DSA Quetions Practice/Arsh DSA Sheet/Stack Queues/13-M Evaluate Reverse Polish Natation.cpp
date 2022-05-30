class Solution
{
public:
    int evalRPN(vector<string> &s)
    {
        stack<int> st;
        int n = s.size();
        for (int i = 0; i < n; i++)
        {
            if (s[i] == "*")
            {
                int n1 = (st.top());
                st.pop();
                int n2 = (st.top());
                st.pop();
                int p = n1 * n2;
                st.push(p);
            }
            else if (s[i] == "/")
            {
                int n1 = (st.top());
                st.pop();
                int n2 = (st.top());
                st.pop();
                int p = n2 / n1;
                st.push(p);
            }
            else if (s[i] == "+")
            {
                int n1 = (st.top());
                st.pop();
                int n2 = (st.top());
                st.pop();
                int p = n1 + n2;
                st.push(p);
            }
            else if (s[i] == "-")
            {
                int n1 = (st.top());
                st.pop();
                int n2 = (st.top());
                st.pop();
                int p = n2 - n1;
                st.push(p);
            }
            else
            {
                st.push(stoi(s[i]));
            }
        }
        int ans = (st.top());
        return ans;
    }
};