class Solution {
public:
    string removeStars(string s) {
        stack<char> stak;
        for (char ch : s) {
            if (ch == '*') {
                stak.pop();
            } else {
                stak.push(ch);
            }
        }

        string ans = "";
        while(!stak.empty()){
            ans += stak.top();
            stak.pop();
        }
        reverse(ans.begin(), ans.end());

        return ans;
    }

};