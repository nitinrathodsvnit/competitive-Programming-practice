
class Solution
{
public:
    bool isSameTree(TreeNode *p, TreeNode *q)
    {
        if (!p and !q)
        {
            return true;
        }
        else if (!p or !q)
            return false;
        // isSameTree(p->left, q->left);
        // isSameTree(p->right, q->right);
        return p->val == q->val and isSameTree(p->left, q->left) and isSameTree(p->right, q->right);
    }
};