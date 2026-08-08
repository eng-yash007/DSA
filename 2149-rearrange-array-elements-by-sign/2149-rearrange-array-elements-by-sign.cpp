class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int i=0;
        int j=1;
        vector<int> arr(nums.size());
        for(int x=0;x<nums.size();x++){
            if(nums[x]>=0){
                arr[i] = nums[x];
                i+=2;
            }
            else{
                arr[j] = nums[x];
                j+=2;
            }
        }
        return arr;
        
    }
};