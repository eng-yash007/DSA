class Solution {
public:
    int strStr(string haystack, string needle) {
        int left = haystack.size();
        int right = needle.size();

        if (right > left) return -1;

        for(int i=0;i<left;i++){
            int j = 0;

            while(j<right && haystack[i+j] == needle[j]){
                j++;
            }
            if(j==right){
                return i;
            }
        }
        return -1;
    }
};