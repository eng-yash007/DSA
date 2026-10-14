class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> seen;

    for (int i = 0; i < static_cast<int>(nums.size()); i++) {
        long long complement = (long long)target - nums[i];

        auto it = seen.find(static_cast<int>(complement));

        if (it != seen.end()) {
            return {it->second, i};
        }

        seen[nums[i]] = i;
    }

    return {};
}
};