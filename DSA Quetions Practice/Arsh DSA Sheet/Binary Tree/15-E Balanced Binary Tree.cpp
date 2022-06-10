class Solution
{
public:
    bool c;
    int helper(TreeNode *root)
    {
        if (root == nullptr)
            return 0;
        if (!c)
            return 0;
        int l = helper(root->left);
        int r = helper(root->right);
        if (abs(l - r) > 1)
        {
            c = false;
        }
        return max(l, r) + 1;
    }
    bool isBalanced(TreeNode *root)
    {
        c = true;
        helper(root);
        return c;
    }
};