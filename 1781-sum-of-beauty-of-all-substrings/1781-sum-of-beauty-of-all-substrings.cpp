class Solution {
public:
    int beautySum(string s) {
        // bruteforce rhega ki ham sari substring nikale unme highest occurence
        // and lowest occurence find kare unka difference nikale and if it is
        // greater than 0 then answer increament kar de
        int n = s.size();
        int ans = 0;

        for (int i = 0; i < n; i++) {
            int freq[26] = {0};
            for (int j = i; j < n; j++) {
                freq[s[j] - 'a']++;

                int mx = INT_MIN;
                int mn = INT_MAX;
                for (int k = 0; k < 26; k++) {
                    if (freq[k] != 0) {
                        mx = max(mx, freq[k]);
                        mn = min(mn, freq[k]);
                    }
                }
                int beauty = mx - mn;
                ans += beauty;
            }
        }
        return ans;
    }
};