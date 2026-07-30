class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        vector<int> prefix(nums.size());
        vector<int> postfix(nums.size());
        vector<int> ans;
        int pre = 1;
        int post = 1;
        for(int i=0;i<nums.size();i++){
            prefix[i] = pre;
            pre *=nums[i];
        }
        for(int i=nums.size()-1;i>=0;i--){
            postfix[i] = post;
            post *= nums[i];
        }

        for(int i=0;i<nums.size();i++){
            ans.push_back(prefix[i]*postfix[i]);
        }
        return ans;


    }
};