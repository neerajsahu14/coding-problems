class Solution {
    fun matrixScore(grid: Array<IntArray>): Int {
        val n = grid.size
        val m = grid[0].size
        val col = IntArray(m) { 0 }
        var sum = 0
        for (row in grid) {
            var x = 0
            var one = false
            for (i in 0 until m) {
                one = (row[0] == 0) xor (row[i] == 1)
                x = (x shl 1) + if (one) 1 else 0
                col[i] += if (one) 1 else 0
            }
            sum += x
        }
        for (i in 0 until m) {
            if (col[i] <= n / 2) {
                sum += (1 shl (m - 1 - i)) * (n - 2 * col[i])
            }
        }
        return sum
    }
}