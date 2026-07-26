class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int first = INT_MIN;
        int second = INT_MIN;
        int third = INT_MIN;
        int min1 = INT_MAX;
        int min2 = INT_MAX;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > first) {
                third = second;
                second = first;
                first = nums[i];
            } else if (nums[i] > second) {
                third = second;
                second = nums[i];

            }

            else if (nums[i] > third) {
                third = nums[i];
            }
            if (nums[i] < min1) {
                min2 = min1;
                min1 = nums[i];
            } else if (nums[i] < min2) {
                min2 = nums[i];
            }
        }
        return max(first * second * third, first*min1*min2);
    }
};