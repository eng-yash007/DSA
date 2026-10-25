class Solution {
public:
    int countStaircase(vector<int>& nums) {
        // hame esi subarray find karni h jiske distinct value ki frequency ka order 1,2,3,... ho
        // bruteforce hoga har array se start krke har array pr khatam kare
        // outer loop lagayenge har index se suru karne k liye 
        // inner loop lagayenge right side se increae karne k liye or freq cnt krne k liye 
        // distinct element ko check karenge 

        int n = nums.size();
        int ans = 0;

        for(int i=0;i<nums.size();i++){ // outer loop h mtlb starting of every subarray
            unordered_map<int, int> freq; // har number i freq count karta h or store krte h
            vector<int> order; // distinct number ko unke order mein store krega
            
            for(int j=i;j<nums.size();j++){ // inner loop 
                
                if(freq[nums[j]] == 0){ // checking for new distinct element
                    order.push_back(nums[j]);
                }

                freq[nums[j]]++;


                bool flag  = true; 

                for(int k = 0;k<order.size();k++){
                    if(freq[order[k]] != (k+1)){
                        flag = false; // hamne assume kia tha ki subarray valid h bt agr ye if condition follow nai krta to ham usko false kar denge return or hal ke hal hi return kar denge
                        break;
                    }
                }
                if(flag == true){ // agr hamara assumption sahi h to ham ans m increament kr denge simply 
                    ans++;
                }
            }
        }
            return ans;
    }
};