class Solution {
public:
    string reverseWords(string s) {
        vector<string> words;
        string chr;
        
            for(int i = 0; i < s.size(); i++) {

            if(s[i] == ' ')
                continue;

            chr = "";

            while(i < s.size() && s[i] != ' ') {
                chr += s[i];
                i++;
            }

            words.push_back(chr);
        }
            

            reverse(words.begin(), words.end());
        
            string result = "";

            for (int i = 0; i < words.size(); i++) {
                result += words[i];
            // Add a space if it's not the last word
            if (i < words.size() - 1) {
                result += " ";
            }
        }
        
        return result;
    }
};