class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int mn = INT_MAX;
        for(int i=0;i<nums1.size();i++){
            if(nums1[i]%2 == 1){
                mn = min(mn, nums1[i]);
            }
        }
        if(mn == INT_MAX) {
            return true;
        }
        for(int i=0;i<nums1.size();i++){
            if(nums1[i]%2 ==0 && nums1[i]<mn){
                return false;
            }
        }
        return true;
    }
};