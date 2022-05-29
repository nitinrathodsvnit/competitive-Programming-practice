class Solution
{
public:
    bool digitCount(string num)
    {
        int n = num.length();

        vector<int> v(n + 10);
        for (int i = 0; i < n; i++)
        {
            int N = num[i] - '0';
            v[N] = v[N] + 1;
        }
        for (int i = 0; i < n; i++)
        {
            int N = num[i] - '0';
            if (N != v[i])
            {
                return false;
            }
        }
        return true;
    }
};