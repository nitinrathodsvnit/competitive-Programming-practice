class Solution
{
public:
    vector<string> st;
    string temp;
    void helper(TreeNode *root)
    {
        int len = temp.length();
        temp += "->" + to_string(root->val);

        if (!root->left && !root->right)
            st.push_back(temp);

        if (root->left)
            helper(root->left);

        if (root->right)
            helper(root->right);

        temp.resize(len);
    }
    vector<string> binaryTreePaths(TreeNode *root)
    {
        if (!root)
            return st;

        temp = to_string(root->val);

        if (!root->left && !root->right)
            st.push_back(temp);

        if (root->left)
            helper(root->left);
        if (root->right)
            helper(root->right);

        return st;
    }
};