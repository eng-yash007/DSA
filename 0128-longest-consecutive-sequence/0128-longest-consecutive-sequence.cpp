class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int longest =0, cnt = 0, last_smaller = INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]-1 == last_smaller){
                last_smaller = nums[i];
                cnt++;

            }
            else if(nums[i]==last_smaller){
                //do nothing when same
            }
            else if(nums[i]!=last_smaller){
                //jab consecutive bhi na ho or same bhi na ho
                cnt = 1;
                last_smaller = nums[i];
            }
            longest = max(longest, cnt);
        }
        return longest;
    }
};