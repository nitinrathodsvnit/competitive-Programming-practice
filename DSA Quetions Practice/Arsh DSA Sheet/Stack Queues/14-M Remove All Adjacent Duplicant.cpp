class Solution
{
public:
    string removeDuplicates(string a, int k)
    {
        stack<pair<char, int>> s;
        int n = a.length();
        for (int i = 0; i < n; ++i)
        {
            if (!s.empty() and s.top().first == a[i])
            {
                int tm = s.top().second;
                s.push({a[i], tm + 1});
                // cout<<s.top().first<<" "<<s.top().second<<"  ";
                if (tm + 1 == k)
                {
                    for (int j = 0; j < k and !s.empty(); ++j)
                    {
                        s.pop();
                    }
                }
            }
            else
            {
                s.push({a[i], 1});
                // cout<<s.top().first<<" "<<s.top().second<<"  ";
            }
        }
        string ans = "";
        while (!s.empty())
        {
            ans += s.top().first;
            s.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};