class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        set<int> exam;
        int ans;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0) {
                exam.insert(nums[i]);
            }
        }
        int i = 0;
        for (auto it : exam) {
            if (it != i + 1)
                return i + 1;
                i++;
        }
        return exam.size() + 1;
    }
};