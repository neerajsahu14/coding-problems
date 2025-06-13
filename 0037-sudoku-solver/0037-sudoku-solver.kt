class Solution {
    fun solveSudoku(board: Array<CharArray>) {
        fun isValid(num : Char, row : Int, col :Int) :Boolean{
            for(i in 0 until 9){
                if(board[row][i]==num) return false
                if(board[i][col]==num) return false
                if(board[3 * (row / 3) + i / 3][3 * (col / 3) + i % 3] == num) return false
            }
            return true
        }
        fun solve() : Boolean{
            for(i in 0 until 9){
                for(j in 0 until 9){
                    if(board[i][j]=='.'){
                        for (num in '1'..'9'){
                            if(isValid(num,i,j)){
                                board[i][j]=num
                                if(solve()){
                                    return true
                                }
                                board[i][j] ='.'
                            }
                        }
                        return false
                    }
                }
            }
            return true
        }
        solve()
    }
}