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
    int check(TreeNode* node) {

        if (node == NULL)
            return 0; // agar node null hua to 0 return karenge uski height

        int left = check(node->left);
        if(left == -1) return -1; // left subtree unbalanced h 

        int right = check(node->right);
        if(right == -1) return -1; // right subtree unbalanced h

        if(abs(left-right)>1) return -1; // current node unbalanced h

        return 1 + max(left, right); // height return kar rhe
    }

     bool isBalanced(TreeNode* root) {
        return check(root) != -1;
    }

};