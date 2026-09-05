class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();

        for (int i = 0; i < n; i++) {

            // max of nums[0...i]
            int mx = nums[0];
            for (int j = 0; j <= i; j++) {
                mx = max(mx, nums[j]);
            }

            // min of nums[i...n-1]
            int mn = nums[i];
            for (int j = i; j < n; j++) {
                mn = min(mn, nums[j]);
            }

            // instability score
            int score = mx - mn;

            if (score <= k) {
                return i;
            }
        }

        return -1;
    }
};