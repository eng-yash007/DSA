class Solution {
public:
    int minInsertions(string s) {
        int open = 0;
        int insertion = 0;
        for(int i=0;i<s.size();i++){
            if(s[i] == '('){
                open++;
            }
            else{ //else chala means ek ')' to automatically hoga hame bas dusre ko check krna
                if(i<s.size() && s[i+1] == ')'){
                    i++; // dusra bhi mil gya to ham i ko increament kr denge
                }
                else{
                    insertion++; // dusra nai mila means ek bar add akrna hoga to +1 karenge
                }

                if(open>0){
                    open--;
                }
                else{
                    insertion++;
                }
            }
        }
        return open*2 + insertion; // *2 isiliye agr last me koi '(' mile to uske liye 2*) chaiye isiliye
    }
};