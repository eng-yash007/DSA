class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        // 3 digit even number
        // har number ek hi bar use akr skte
        // hame 3 digit ka banana so ABC to isme A 0 ni hona chaiye, C even hone chaiye or ek digit ek hi bar use hoga to mtlb i=j hua to cocnitnue karenge 
        // set isiliye use kr rhe agr arr me same elemnt s hua to 
        int n = digits.size();
        set<int> st;
        for(int i=0;i<n;i++){
            if(digits[i] == 0){
                continue;
            }
            for(int j=0;j<n;j++){
                if(j==i){
                    continue;
                }
                for(int k=0;k<n;k++){
                    if(k==j || k==i){
                        continue;
                    }
                    if(digits[k]%2 != 0){
                        continue;
                    }
                    int number = 100*digits[i] + 10*digits[j] + 1*digits[k];
                    st.insert(number);
                }

            }
        }
        return st.size();
    }
};