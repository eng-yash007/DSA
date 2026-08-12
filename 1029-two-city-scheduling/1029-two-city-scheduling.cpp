class Solution {

    static bool cmp(vector<int>& v1, vector<int>& v2 ){
        return (v1[1]-v1[0]) <(v2[1]-v2[0]);
    }
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        sort(costs.begin(), costs.end(), cmp);
        int n = costs.size()/2;
        int ans = 0;
        for(int i=0;i<costs.size();i++){
            if(i<n){
                ans += costs[i][1];
            }
            else{
                ans+= costs[i][0];
            }
        }
        return ans;
    }
};