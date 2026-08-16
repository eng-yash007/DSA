class Solution {
public:
    bool search(vector<int>& nums, int target) {
         // ham phle jesa logic isiliye use ni karengeif we have an array like [3, 4, 1, 2, 3, 3, 3,3 ,3] then we have low = 3, mid= 3, high= 3 to fir ham sorted half kese find karenge???

         // we will shrink our workspace by using (low == mid == high)

         int low = 0;
         int high = nums.size()-1;
         while(low<=high){
            int mid = low+ (high-low)/2;
            if(nums[mid]== target) return true;

            if(nums[low] == nums[mid] && nums[mid] == nums[high]){
                low++;
                high--;

            }

            else if(nums[mid]>=nums[low]){
                if(nums[low]<=target && target < nums[mid]){
                    high = mid-1;

                }
                else{
                    low = mid+1;
                }
            }
            else{
                if(nums[mid]<target && target <= nums[high]){
                    low = mid+1;
                }
                else{
                    high= mid-1;
                }
            }
         }
         return false;
    }
};