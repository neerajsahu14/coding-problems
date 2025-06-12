class Solution {
    fun isValidSudoku(board: Array<CharArray>): Boolean {
        // Row check
        for (i in 0 until 9) {
            val seen = mutableSetOf<Char>()
            for (j in 0 until 9) {
                val c = board[i][j]
                if (c != '.') {
                    if (c in seen) return false
                    seen.add(c)
                }
            }
        }

        // Column check
        for (i in 0 until 9) {
            val seen = mutableSetOf<Char>()
            for (j in 0 until 9) {
                val c = board[j][i]
                if (c != '.') {
                    if (c in seen) return false
                    seen.add(c)
                }
            }
        }

        // Box check
        val starts = listOf(
            Pair(0, 0), Pair(0, 3), Pair(0, 6),
            Pair(3, 0), Pair(3, 3), Pair(3, 6),
            Pair(6, 0), Pair(6, 3), Pair(6, 6)
        )

        for ((i, j) in starts) {
            val seen = mutableSetOf<Char>()
            for (row in i until i + 3) {
                for (col in j until j + 3) {
                    val c = board[row][col]
                    if (c != '.') {
                        if (c in seen) return false
                        seen.add(c)
                    }
                }
            }
        }

        return true
    }
}
