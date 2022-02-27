/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int fun(TreeNode* a)
    {
        if(a==nullptr)
        {
            return 0;
        }
        return 1+max(fun(a->left),fun(a->right));
    }
    bool isBalanced(TreeNode* root) 
    {
        if(root==nullptr)
            return true;
        if(abs(fun(root->left)-fun(root->right))>1)
            return false;
        return (isBalanced(root->left)&&isBalanced(root->right));
    }
};