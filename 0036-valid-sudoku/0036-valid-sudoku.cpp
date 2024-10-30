class Solution {
public:
    bool isValid(int row, int col, char val, vector<vector<char>> & board){
        board[row][col]='-';
        cout << val;
        for(int i = 0; i < 9; i++){
            //checking for row
            if(board[i][col] == val) return false;

            //checking for column
            if(board[row][i] == val) return false;

            //checking for box
            if(board[3*(row/3) + i/3][3*(col/3) + (i%3)] == val)return false;
        }
        board[row][col]=val;
        return true;
    }

    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                if(board[i][j]!='.' && !isValid(i,j,board[i][j], board)){
                    return false;
                }
            }
        }
        return true;
    }
};