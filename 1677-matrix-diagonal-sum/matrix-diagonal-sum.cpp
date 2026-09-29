class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {

        // primary diagonal

        int first = 0;
        for(int i=0;i<mat.size();i++){
            first += mat[i][i];
        }
        // secondary diagonal
        int second = 0;
        int i=0,j=mat[0].size()-1;
        while(j>=0){
            second += mat[i][j];
            i++;
            j--;
        }
         int sum = first + second;

        // Remove duplicate center element
        if(mat.size() % 2 == 1) {
            sum -= mat[mat.size()/2][mat.size()/2];
        }

        return sum;
    }
};