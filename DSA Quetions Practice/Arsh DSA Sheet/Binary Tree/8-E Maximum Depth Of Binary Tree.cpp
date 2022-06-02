// 1 + max(rightHeight, leftHeight);

class Solution
{
public:
    int maxDepth(TreeNode *root)
    {
        if (!root)
        {
            return 0;
        }
        int tm1 = maxDepth(root->left), tm2 = maxDepth(root->right);
        return max(tm1, tm2) + 1;
    }
};