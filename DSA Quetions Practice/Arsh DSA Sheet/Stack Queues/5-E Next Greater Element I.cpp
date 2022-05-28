
// using stack and  hashmap
class Solution
{
public:
    vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> ans;
        stack<int> st;
        int n = nums2.size();
        map<int, int> mp;
        for (int i = n - 1; i >= 0; i--)
        {

            while (!st.empty() and nums2[i] > st.top())
            {
                st.pop();
            }
            if (st.empty())
            {
                mp[nums2[i]] = -1;
            }
            else
            {
                mp[nums2[i]] = st.top();
            }
            st.push(nums2[i]);
        }
        for (auto i : nums1)
        {
            ans.push_back(mp[i]);
        }
        return ans;
    }
};

// brutforce
class Solution
{
public:
    vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> ans;
        for (int i = 0; i < nums1.size(); i++)
        {
            bool c = false;
            int d = -1;
            for (int j = 0; j < nums2.size(); j++)
            {
                if (nums1[i] == nums2[j])
                {
                    c = true;
                }
                else if (c)
                {
                    if (nums1[i] < nums2[j])
                    {
                        d = nums2[j];
                        break;
                    }
                }
            }
            ans.push_back(d);
        }
        return ans;
    }
};