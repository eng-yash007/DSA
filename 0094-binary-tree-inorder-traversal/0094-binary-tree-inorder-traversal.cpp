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
    
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        stack<TreeNode*> st;
        TreeNode* node = root;

        while(node!=NULL || !st.empty()){ // right null ho gyabt stack m or elemnt h to hm unhe process karenge 
            while(node!=NULL){ // completely left jaa rhe h
                st.push(node);
                node = node->left;
            }

            node = st.top();
            st.pop();

            ans.push_back(node->val);
            node = node->right; // left null ho jayega to ans me push karke rightmt jayenge 
        }
        return ans;
    }
};