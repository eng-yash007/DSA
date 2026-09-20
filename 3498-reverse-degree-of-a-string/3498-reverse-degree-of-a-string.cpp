class Solution {
public:
    int reverseDegree(string s) {
        //contribution=reversePosition×(i+1)
        
        int ans = 0;
        for(int i =0;i<s.size();i++){
            int reverse_str = 26 - (s[i]-'a');
            ans += reverse_str * (i+1);
        }
        return ans;
    }
};