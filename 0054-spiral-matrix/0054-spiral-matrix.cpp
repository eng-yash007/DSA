class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        // right -> bottom -> left -> top

        int n = matrix.size();
        int m = matrix[0].size();

        int left = 0;       // first column
        int right = m - 1;  // last column
        int top = 0;        // first row
        int bottom = n - 1; // last row

        vector<int> ans;
        while (left <= right && top <= bottom) {
            // right is performing
            for (int i = left; i <= right; i++) { // left se right jaa rhe
                ans.push_back(matrix[top][i]); // top means first row ke element
                                               // and i mean first row ka har ek
                                               // individual element
            }
            top++; // top ko niche karenge

            // bottom is performing
            for (int i = top; i <= bottom; i++) {
                ans.push_back(matrix[i][right]);
            }
            right--;
            if (top <= bottom) {
                // left is performing
                for (int i = right; i >= left; i--) {
                    ans.push_back(matrix[bottom][i]);
                }
                bottom--;
            }
            if (left <= right) {
                // top is performing
                for (int i = bottom; i >= top; i--) {
                    ans.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        return ans;
    }
};