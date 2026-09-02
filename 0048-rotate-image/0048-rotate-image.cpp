class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        // brute force karte h 
        // we can clearly see ki 1st row will goes to last column 
        // 2nd row will go to last 2nd column 
        // and so on...
        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<int>> ans(n, vector<int>(n));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                ans[j][n-1-i] = matrix[i][j]; 
            }
        }
        
        matrix = ans;
    }
};