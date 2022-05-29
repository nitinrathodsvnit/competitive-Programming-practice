class Solution
{
public:
    vector<int> dailyTemperatures(vector<int> &arr)
    {
        int n = arr.size();
        map<int, int> a;
        vector<int> ans(n);
        stack<int> s;
        for (int i = n - 1; i >= 0; --i)
        {
            if (s.empty())
            {
                ans[i] = 0;
                s.push(arr[i]);
            }
            else if (arr[i] < s.top())
            {
                ans[i] = 1;
                s.push(arr[i]);
            }
            else
            {
                int tm = 1, idx = i + 1;
                while (!s.empty() and arr[i] >= s.top())
                {
                    tm += a[s.top()];
                    s.pop();
                    idx++;
                }
                if (s.empty())
                {
                    ans[i] = 0;
                    s.push(arr[i]);
                    a[arr[i]] = ans[i];
                    continue;
                }
                s.push(arr[i]);
                ans[i] = tm;
            }
            a[arr[i]] = ans[i];
        }
        return ans;
    }
};