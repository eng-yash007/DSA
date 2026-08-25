class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> freq;
        for(auto x: nums){
            freq.insert(x);
        }
        for(int i=1;i<=200;i++){
            if(freq.find(i*k) == freq.end()){
                return k*i;
            }
        }
        return 0;
    }
};