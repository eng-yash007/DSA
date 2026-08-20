class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        // (even, odd) -> we are at left part -> eliminate left
        // (odd, even) -> we are at right part -> eliminate right
        // we wil initally trim down the workspace form low and hight too
        // we will check for low and high manually at the beginning
        // we will compare mid to its left and right and check if it is not ewual to anyone of them if yes then return mid otherwise update left or right accordingly
        // [even,odd, even,odd, even, odd,even]
        int n = nums.size();
        if(n ==1) return nums[0];
        if(nums[0] != nums[1]) return nums[0];
        if(nums[n-1] != nums[n-2]) return nums[n-1];
        int low = 1;
        int high = n-2;
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid] != nums[mid+1] && nums[mid] != nums[mid-1]) return nums[mid];
            else{
                if((mid%2==1 && nums[mid] == nums[mid-1]) || mid%2==0 && nums[mid] == nums[mid+1]){
                    low = mid+1;
                }
                else{
                    high = mid-1;
                }
            }
        }
        return nums[0];
    }
};