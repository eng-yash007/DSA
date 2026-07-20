class Solution {
public:

    int atmost(vector<int>& nums, int goal){
        if (goal < 0) return 0;
        long sum = 0;
        int l=0, r=0, cnt = 0;
       
        while(r<nums.size()){
            sum += nums[r];
            //ham less than equals to goal ka nikalenge phle
            //func(nums, goal) - func(nums, goal-1) 
            while(sum>goal){
                sum -= nums[l];
                l++;
            }
            cnt += (r-l+1);
            r++;
        }
        return cnt;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return (atmost(nums,goal) - atmost(nums, goal-1));
        
    }
};