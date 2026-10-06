class Solution {
public:

    int height(TreeNode* node){
        if(node == NULL) return 0;

        int lh = height(node->left);
        int rh = height(node->right);

        return 1+max(lh,rh);
    }
    int maxi = 0;
    int diameterOfBinaryTree(TreeNode* node) {
        if(node == NULL) return 0;
        
        int lh = height(node->left);
        int rh = height(node->right);

        maxi = max(maxi, lh+rh);

        diameterOfBinaryTree(node->left);
        diameterOfBinaryTree(node->right);

        return maxi;
    }
};