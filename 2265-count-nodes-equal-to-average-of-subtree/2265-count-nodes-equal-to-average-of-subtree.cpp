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
int ans = 0;

    pair<int, int> dfs(TreeNode* root) {
        if (root == NULL) {
            return {0, 0};
        }

        // Left subtree
        auto left = dfs(root->left);

        // Right subtree
        auto right = dfs(root->right);

        // Current subtree ka sum
        int sum = left.first + right.first + root->val;

        // Current subtree me nodes ki count
        int count = left.second + right.second + 1;

        // Average check
        if (root->val == sum / count) {
            ans++;
        }

        // {sum, count} return
        return {sum, count};
    }
    int averageOfSubtree(TreeNode* root) {
        dfs(root);
        return ans;
    }
};