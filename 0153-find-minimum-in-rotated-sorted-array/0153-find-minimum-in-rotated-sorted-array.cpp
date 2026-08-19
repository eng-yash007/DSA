class Solution {
public:
    int findMin(vector<int>& nums) {
        // sort(nums.begin(), nums.end());
        // return nums[0];


        int low=0,high = nums.size()-1;

        while(low<high){
            int med = low+(high-low)/2;
            if(nums[med]>nums[high]){
                low = med+1;
            }
            else if(nums[med]<=nums[high]){
                high = med;
            }
          
        }
        return nums[high];
    }
};