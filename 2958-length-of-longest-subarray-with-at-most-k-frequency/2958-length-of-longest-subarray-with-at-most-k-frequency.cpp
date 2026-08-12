class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int l=0;
        int maxlen = 0;
        unordered_map<int,int> freq;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
            while(freq[nums[i]]>k){
                freq[nums[l]]--;
                l++;
            }
            maxlen = max(maxlen, i-l+1);
        }
        return maxlen;


    }
};