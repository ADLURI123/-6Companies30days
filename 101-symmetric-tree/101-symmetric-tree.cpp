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
    void fun(TreeNode * a,TreeNode* b,bool&res)
    {
        if(a==nullptr&&b==nullptr)
        {
           return ; 
        }
        if(a==nullptr||b==nullptr||(a->val!=b->val))
        {
            res=false;
            return;
        }
        fun(a->left,b->right,res);
        fun(a->right,b->left,res);
    }
    bool isSymmetric(TreeNode* root) 
    {
        bool res=true;
        fun(root->left,root->right,res);
        return res;
    }
};