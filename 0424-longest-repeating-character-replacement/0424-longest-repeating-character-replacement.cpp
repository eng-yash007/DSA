class Solution {
public:
    int characterReplacement(string s, int k) {
        int left=0, right=0, maxlen=0, len, maxfreq = 0;
        map<int, int> mpp;
        while(right<s.size()){
            mpp[s[right]]++;
            len = right - left + 1;
            maxfreq = max(maxfreq, mpp[s[right]]);
           
            if(len-maxfreq>k){
                mpp[s[left]]--;
                left++;
            }


            
            maxlen = max(maxlen, right-left+1);
            
            right++;
        }
        return maxlen;
    }
};