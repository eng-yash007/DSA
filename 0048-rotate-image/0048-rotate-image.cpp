class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        // optimal karenge 
        // isme ham inplace matrix use karenge 
        // isme ham transpose akrenge 
        int n = matrix.size();
        // int m = matrix[0].size();
        // bcoz matrix di rkhi h nXn ki h 
        for(int i= 0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                swap(matrix[i][j], matrix[j][i]);//ye hamne transpose kia h 

            }
        }
        for(int i=0;i<n;i++){
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};