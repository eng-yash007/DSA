class Solution {
public:
    bool check(const string &s, int i){
            if(i>= s.size()/2){
                return true;
            }
            if(s[i]!=s[s.size()-i-1]){
                return false;
            }
            return check(s, i+1);
        }
    bool isPalindrome(string s) {
        string updated_string = "";
        for(auto ch: s){
            if(isalnum(ch)){
                updated_string += tolower(ch);
            }
        }
            return check(updated_string, 0);
    }
        
    
        
    
};