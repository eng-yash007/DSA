/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    int height(TreeNode* node) {

        if (node == NULL)
            return 0;

        int left = height(node->left);
        int right = height(node->right);

        return 1 + max(left, right);
    }

    bool check(TreeNode* node){
        if(node == NULL) return true;

        int lh = height(node->left);
        int rh = height(node->right);

        if(abs(lh-rh)>1) return false;

        bool left = check(node -> left);
        bool right = check(node -> right);

        if(!left || !right) return false;

        return true;
        
    }

     bool isBalanced(TreeNode* root) {
        return check(root);
    }

};