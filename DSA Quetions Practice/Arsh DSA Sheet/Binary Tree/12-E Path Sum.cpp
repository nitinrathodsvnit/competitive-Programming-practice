class Solution
{
public:
    bool ans = false;
    void f(TreeNode *root, int sum, int target)
    {
        if (root == NULL)
            return;
        f(root->left, sum + root->val, target);
        f(root->right, sum + root->val, target);
        if (root->left == NULL and root->right == NULL and root->val + sum == target)
        {
            ans = true;
            exit;
        }
    }
    bool hasPathSum(TreeNode *root, int targetSum)
    {
        int sum = 0;
        f(root, sum, targetSum);
        return ans;
    }
};