class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int mx = *max_element(nums.begin(), nums.end());
        int mn = *min_element(nums.begin(), nums.end());
        int ans;
        int mx_index;
        int mn_index;

        for(int i=0;i<n;i++){
            if(nums[i] == mx){
                mx_index = i;
            }
            if(nums[i] == mn){
                mn_index = i;
            }
        }

        int a = min(mn_index, mx_index);
        int b = max(mn_index, mx_index);

        if(a<n/2 && b<n/2){
            ans = b+1;
        }
        else if(a>=n/2 && b>=n/2){
            ans = n-a;
        }
        else{
            ans = (a+1) + (n-b);
        }
        return min({b+1, n-a, (a+1) + (n-b)});
    }
};