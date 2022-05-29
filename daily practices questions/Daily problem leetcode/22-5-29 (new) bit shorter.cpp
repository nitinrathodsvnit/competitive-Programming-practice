class Solution
{
public:
    int maxProduct(vector<string> &words)
    {
        int ans = 0;
        vector<int> a(words.size());
        for (int i = 0; i < words.size(); ++i)
        {
            for (char c : words[i])
            {
                a[i] |= (1 << (c - 'a'));
            }
            for (int j = 0; j < i; ++j)
            {
                if (!(a[j] & a[i]))
                {
                    ans = max(ans, int(words[i].length() * words[j].length()));
                }
            }
        }
        return ans;
    }
};