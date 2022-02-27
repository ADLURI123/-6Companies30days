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
    void fun(TreeNode* p, TreeNode* q,bool &res)
    {
        if(p==nullptr&&q==nullptr)
        {
            return ;
        }
        if((p==nullptr&&q!=nullptr)||(p!=nullptr&&q==nullptr)||(p->val!=q->val))
        {
            res=false;
            return ;
        }
        fun(p->left,q->left,res);
        fun(p->right,q->right,res);
    }
    bool isSameTree(TreeNode* p, TreeNode* q) 
    {
        bool res=true;
        fun(p,q,res);
        return res;
    }
};