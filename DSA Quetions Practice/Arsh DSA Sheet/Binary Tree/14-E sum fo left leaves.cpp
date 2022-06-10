class Solution
{
public:
    int f(TreeNode *root, int &sum)
    {
        if (root == NULL)
            return 0;
        if (root->left and root->left->left == nullptr and root->left->right == nullptr)
        {
            sum += root->left->val;
        }
        f(root->left, sum);
        f(root->right, sum);
        return sum;
    }
    int sumOfLeftLeaves(TreeNode *root)
    {
        int sum = 0;
        return f(root, sum);
    }
};