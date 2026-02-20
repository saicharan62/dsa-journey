//TC - O(1)
//SC - O(1)
//technique - we use set DS to store rows, cols, 3*3 boxes separately, then use formula to find index of elem. in box using row&col values.

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

                if(row[r].count(val) || col[c].count(val) || box[boxIndex].count(val)){
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
