// TC - O(log(m*n))
// SC - O(1)
// technique - Instead of flattening the matrix into an array, we access required rows and columns by using formulae for individual row and column, and performing the BS.

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int ROWS = matrix.size(), COLS = matrix[0].size();

        int l = 0, h = ROWS * COLS - 1;

        while(l <= h){
            int m = l + (h-l)/2;
            int r = m / COLS, c = m % COLS;
            if(matrix[r][c] == target){
                return true;
            }
            else if(matrix[r][c] > target){
                h = m - 1;
            }
            else {
                l = m + 1;
            }
        }
        return false;
    }
};


// Brute-forcing using nested loops.
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int i=0; i<matrix.size(); i++){
            for(int j=0; j<matrix[i].size(); j++){
                if(matrix[i][j] == target){
                    return true;
                    break;
                }
            }
        }
        return false;
    }
};
