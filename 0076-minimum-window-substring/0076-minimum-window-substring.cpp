class Solution {
public:
    string minWindow(string s, string t) {
        int minlen = INT_MAX;
        int Sindex = -1;
        int hash[256] = {0};
        int l=0,r=0,cnt=0;
        for(int i=0;i<t.size();i++){
            hash[t[i]]++;
        }
        while(r<s.size()){
            if(hash[s[r]]>0){
                cnt++;
            }
            hash[s[r]]--;
            while(cnt==t.size()){
                if(r-l+1 < minlen){
                    minlen = r-l+1;
                    Sindex = l;
                }
                hash[s[l]]++;
                if(hash[s[l]]>0){
                    cnt--;
                }
                l++;
            }
            r++;
        }
        
        if(Sindex == -1){
            return "";
        }
        return s.substr(Sindex, minlen);
        
    }
};