class Solution {
public:
    string reverseParentheses(string s) {
        stack<string> st;
        string current = "";
        for(int i=0;i<s.size();i++){
            if(s[i] == '('){
                st.push(current);
                current = "";
            }
            else if(s[i] == ')'){
                reverse(current.begin(), current.end());
                string prev = st.top();
                st.pop();
                current = prev+current;
            }
            else{
                current = current + s[i];
            }
        }
        return current;
    }
};