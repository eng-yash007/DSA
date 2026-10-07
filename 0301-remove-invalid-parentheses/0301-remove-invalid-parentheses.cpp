class Solution {
public:
    // Saare valid answers store karne ke liye
    set<string> ans;

    void solve(string &s, int i, string curr,
               int left, int right,
               int leftRem, int rightRem) {

                // Agar poori string process ho gayi
                if (i == s.size()) {
                    // Saare required brackets remove ho gaye
                    if (leftRem == 0 && rightRem == 0) {
                        // Valid answer store karo
                        ans.insert(curr);
                    }
                    return;
                }

                // Current character
                char ch = s[i];

                // Agar current character '(' hai
                // aur hume '(' remove karna baaki hai
                if (ch == '(' && leftRem > 0) {
                    // Current '(' ko REMOVE karo
                    solve(s, i + 1, curr,
                          left, right,
                          leftRem - 1, rightRem);
                }  

                // Agar current character ')' hai
                // aur hume ')' remove karna baaki hai
                if (ch == ')' && rightRem > 0) {
                    // Current ')' ko REMOVE karo
                    solve(s, i + 1, curr,
                          left, right,
                          leftRem, rightRem - 1);
                }

                // Agar normal character hai
                // '(' ya ')' nahi hai
                if (ch != '(' && ch != ')') {
                    // Normal character ko simply answer mein add karo
                    solve(s, i + 1, curr + ch,
                          left, right,
                          leftRem, rightRem);
                    return;
                }

                if (ch == '(') {
                    // '(' ko KEEP kar rahe hain
                    // Isliye left balance +1
                    solve(s, i + 1, curr + '(',
                          left + 1, right,
                          leftRem, rightRem);
                }

                else {
                    // ')' ko KEEP tabhi kar sakte hain
                    // jab pehle koi unmatched '(' available ho
                    if (left > right) {
                        // ')' keep karo
                        // Isliye right balance +1
                        solve(s, i + 1, curr + ')',
                              left, right + 1,
                              leftRem, rightRem);
                    }
                }
            }






    vector<string> removeInvalidParentheses(string s) {
        // Kitne '(' remove karne hain
        int leftRem = 0;

        // Kitne ')' remove karne hain
        int rightRem = 0;

        // minimum removal find kar rhe h 
        for (char ch : s){
            // '(' mila
            if (ch == '(') {
                leftRem++;
            }
            // ')' mila
            else if (ch == ')'){
                // Agar matching '(' available hai
                if (leftRem > 0) {
                    // Ye '(' aur ')' pair ban gaya
                    leftRem--;
                }

                else {
                    // Matching '(' nahi hai
                    // Isliye ye extra ')' hai
                    rightRem++;
                }
            }
        }

        // Ab backtracking start karo
        solve(s, 0, "",
                0, 0,
                leftRem, rightRem);

        // set ko vector mein convert karke return karo
        return vector<string>(ans.begin(), ans.end());
    }
};