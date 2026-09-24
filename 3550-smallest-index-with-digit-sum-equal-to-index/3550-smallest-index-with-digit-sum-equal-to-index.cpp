class Solution {
public:
    int digitsum(int num) {
        int sum = 0;
        while (num > 0) {
            int digit = num % 10;
            sum += digit;
            num /= 10;
        }
        return sum;
    }
    int smallestIndex(vector<int>& nums) {
        // hame nums[i] pr jo element h uske digits ka sum nikalna h agr uska
        // sum i k equal hota h to i print karna h otherwise -1 return karna h
        for (int i = 0; i < nums.size(); i++) {
            if (digitsum(nums[i]) == i)
                return i;
            
        }
        return -1;
    }
};