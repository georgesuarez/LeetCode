struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution
{
public:
    TreeNode *searchBST(TreeNode *root, int val)
    {
        if (root->val == val)
        {
            return root;
        }

        if (val < root->left && root->left != NULL)
        {
            return searchBST(root->left, val);
        }
        else if (val > root->right && root->right != NULL)
        {
            return searchBST(root->right, val);
        }

        return NULL;
    }
};
