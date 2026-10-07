class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        int cnt = 0;
        int pos = 0;
        for(int x:nums){
                pos+=x;
                if(pos == 0) cnt++;
        }
        return cnt;
    }
};