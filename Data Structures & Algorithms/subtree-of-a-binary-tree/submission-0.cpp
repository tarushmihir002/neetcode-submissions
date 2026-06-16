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
    bool isSame(TreeNode* root, TreeNode* subroot){
        if(!root && !subroot) return true;
        if(root && subroot && root->val == subroot->val){
            return isSame(root->left,subroot->left) && isSame(root->right,subroot->right);
        }
        return false;
    }

    bool isSubtree(TreeNode* root, TreeNode* subroot) {
        if(!subroot) return true;
        if(!root) return false;
        if(isSame(root,subroot))return true;
        return isSubtree(root->left,subroot) || isSubtree(root->right,subroot);
    }
};
