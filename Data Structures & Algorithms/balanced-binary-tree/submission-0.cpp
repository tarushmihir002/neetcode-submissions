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
    bool isBalanced(TreeNode* root) {
        if (!root) return true;
        bool result = true;
        height(root, result);
        return result;
    }

    int height(TreeNode* root, bool& result) {
        if (!root) return 0;
        int left = height(root->left, result);
        int right = height(root->right, result);

        if (abs(left - right) > 1) {
            result = false;
        }

        return max(left, right) + 1;
    }
};
