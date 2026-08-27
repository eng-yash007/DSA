class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n = arr.size();
        vector<int> sorted = arr;
        sort(sorted.begin(), sorted.end());
        unordered_map<int,int> rank;
        int r =1;
        for(auto x: sorted){
            if(rank.find(x) == rank.end()){
                // kya map me koi element already exist to nai karta
                rank[x] = r;
                r++;
            }
            
        }
            vector<int> ans;
            for(int x: arr){
                ans.push_back(rank[x]);
            }
        return ans;
    }
};