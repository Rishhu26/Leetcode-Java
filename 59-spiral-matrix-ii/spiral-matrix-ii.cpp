class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {

        vector<vector<int>> mat(n, vector<int>(n, 0));

        int top = 0, bottom = n - 1;
        int left = 0, right = n - 1;

        int num = 1;

        while (left <= right && top <= bottom) {

            // top row
            for (int j = left; j <= right; j++) {
                mat[top][j] = num++;
            }
            top++;

            // right column
            for (int i = top; i <= bottom; i++) {
                mat[i][right] = num++;
            }
            right--;

            // bottom row
            if (top <= bottom) {
                for (int j = right; j >= left; j--) {
                    mat[bottom][j] = num++;
                }
                bottom--;
            }

            // left column
            if (left <= right) {
                for (int i = bottom; i >= top; i--) {
                    mat[i][left] = num++;
                }
                left++;
            }
        }

        return mat;
    }
};