// same as busyman problem
// sort by the when work done and then check if new work start when old one end if yes then increase the ans
class Solution
{
public:
    int eraseOverlapIntervals(vector<vector<int>> &in)
    {
        int n = in.size();
        vector<pair<int, int>> a;
        for (int i = 0; i < n; ++i)
        {
            a.push_back({in[i][1], in[i][0]});
        }
        sort(a.begin(), a.end());
        int tm = a[0].first, ans = 1;
        for (int i = 1; i < n; ++i)
        {
            if (a[i].second >= tm)
            {
                ans++;
                tm = a[i].first;
            }
        }
        return n - ans;
    }
};