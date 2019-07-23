/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

// Using Recursion
// Time Complexity: O(n)
// Space Complexity: O(log n)
// Where n is the number of nodes in the tree

class Solution
{
public:
    vector<int> inorderTraversal(TreeNode *root)
    {
        vector<int> result;
        inorder(root, result);
        return result;
    }

    void inorder(TreeNode *root, vector<int> &vec)
    {
        if (root != NULL)
        {
            if (root->left != NULL)
            {
                inorder(root->left, vec);
            }
            vec.push_back(root->val);
            if (root->right != NULL)
            {
                inorder(root->right, vec);
            }
        }
    }
};

// Using Iterative approach
// Time Complexity: O(n)
// Space Complexity: O(n)
// Where n is the number of nodes in the tree
class Solution2
{
public:
    vector<int> inorderTraversal(TreeNode *root)
    {
        vector<int> result;
        stack<TreeNode *> s;
        TreeNode *curr = root;

        while (curr != null || !s.empty())
        {
            while (curr != NULL)
            {
                s.push(curr);
                curr = curr->left;
            }
            curr = s.top();
            s.pop();
            result.push_back(curr->val);
            curr = curr->right;
        }

        return result;
    }
}