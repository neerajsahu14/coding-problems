class Solution {
public:
    void solveSudoku(vector<vector<char>>& board) {

        function<bool(char, int,int )> isValid = [&](char num, int row, int col) {
            for (int i = 0; i < 9; i++) {
            if (board[row][i] == num) return false;
            if (board[i][col] == num) return false; 
            if (board[3 * (row / 3) + i / 3][3 * (col / 3) + i % 3] == num) return false; 
        }
        return true;
        };
    
        function<bool()> solve = [&](){
            for(int i=0; i<9; i++){
                for(int j=0; j<9; j++){
                    if(board[i][j]=='.'){
                        for( char num= '1'; num<='9';num++){
                            if(isValid(num,i,j)){
                                board[i][j]=num;
                                if(solve())
                                    return true;
                                else{
                                    board[i][j]='.';
                                }  
                            } 
                        }
                        return false;
                    }
                }
            }
            return true;
        };
        solve();
    }
};