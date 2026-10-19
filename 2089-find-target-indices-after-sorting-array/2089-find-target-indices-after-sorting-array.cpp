class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int start = 0;
        int cnt = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<target){
                start++;

            }
            if(nums[i] == target){
                cnt++;

            }

        }
        vector<int> ans;
        while(cnt>0){
            ans.push_back(start);
            cnt--;
            start++;
        }
        return ans;
    }
};