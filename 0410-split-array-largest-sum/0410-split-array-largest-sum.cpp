class Solution {
public:

    int func(vector<int>& nums, int pages){
        int student = 1;
        int pagestudent = 0;
        for(int i=0;i<nums.size();i++){
            if((pagestudent + nums[i]) <= pages){
                pagestudent += nums[i];
            }
            else{
                student++;
                pagestudent = nums[i];
            }
        }
        return student;
    }



    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(), nums.end());
        int sum = 0;
        for(int i=0;i<nums.size();i++){
            sum += nums[i];
        }
        int high = sum;

        while(low<=high){
            int mid = (low+high)/2;
            int student_count = func(nums, mid);
            if(student_count > k) low = mid+1;
            else high = mid - 1;
        }
        return low;
    }
};