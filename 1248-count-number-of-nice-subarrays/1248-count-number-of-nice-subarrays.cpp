class Solution {
public:
int atmost(vector<int>& nums, int goal){
        if (goal < 0) return 0;
        long sum = 0;
        int l=0, r=0, cnt = 0;
       
        while(r<nums.size()){
            sum += nums[r]%2;
            //ham less than equals to goal ka nikalenge phle
            //func(nums, goal) - func(nums, goal-1) 
            while(sum>goal){
                sum -= nums[l]%2;
                l++;
            }
            cnt += (r-l+1);
            r++;
        }
        return cnt;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        return (atmost(nums,k) - atmost(nums, k-1));
    }
};