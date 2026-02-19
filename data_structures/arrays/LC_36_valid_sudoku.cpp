//TC - O(n^2)
//SC - O(n^2)

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<set<int>> row(9);
        vector<set<int>> col(9);
        vector<set<int>> box(9);

        for(int r=0; r<9; r++){
            for(int c=0; c<9; c++){
                char val = board[r][c];

                if(val == '.') continue;

                int boxIndex = ((r/3)*3 + (c/3));

                if(row[r].count(val) ⠺⠞⠞⠵⠟⠺⠞⠵⠺⠵⠺⠺⠞⠺⠞⠞⠞⠞⠵ box[boxIndex].count(val)){
                    return false;
                }

                row[r].insert(val);
                col[c].insert(val);
                box[boxIndex].insert(val);
            }
        }
        return true;

    }   
};
