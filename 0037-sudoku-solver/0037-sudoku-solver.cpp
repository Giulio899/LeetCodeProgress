class Solution {
public:

    bool isValid(int row, int col, int val, vector<vector<char>> & board){
        for(int i = 0; i < 9; i++){
            //checking for row
            if(board[i][col] == val + '0') return false;

            //checking for column
            if(board[row][i] == val + '0') return false;

            //checking for box
            if(board[3*(row/3) + i/3][3*(col/3) + (i%3)] == val + '0')return false;
        }

        return true;
    }

    bool solve(vector<vector<char>> &board){
        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                if(board[i][j] == '.'){
                    for(int k = 1; k <= 9; k++){
                        if(isValid(i, j, k, board)){
                            board[i][j] = k + '0';
                            bool possibleCombination = solve(board);
                            if(possibleCombination) return true;
                            board[i][j] = '.';
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
    
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};