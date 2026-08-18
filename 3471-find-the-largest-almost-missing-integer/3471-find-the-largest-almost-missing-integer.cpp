class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> freq;
        int ans = -1;
        for(int i =0;i<n;i++){
                freq[nums[i]]++;
        }

        if(n==k){
            for(int i =0;i<n;i++){
                ans = max(ans, nums[i]);
            }
        }
        else if(k==1){
            for(int i =0;i<n;i++){
                if(freq[nums[i]]==1){
                    ans = max(ans, nums[i]);
                }
            }
        }
        else{
            if (freq[nums[0]] == 1)
                ans = max(ans, nums[0]);

            if (freq[nums[n - 1]] == 1)
                ans = max(ans, nums[n - 1]);
        }
        return ans;
        
        
    }
};