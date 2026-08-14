class Solution {
public:
    int maximumLengthSubstring(string s) {
        int l=0;
        int freq[26]={0};
        int maxlen = 0;
        for(int i=0;i<s.size();i++){
            freq[s[i]-'a']++;
            while(freq[s[i]-'a']>2){
                freq[s[l]-'a']--;
                l++;
            }
            maxlen = max(maxlen, i-l+1);
        }
        return maxlen;
    }
};