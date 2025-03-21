import kotlin.math.max
import kotlin.Int.Companion.MAX_VALUE

class Solution {
    fun maxProfit(prices: IntArray): Int {
        var maxP = 0
        var minP = MAX_VALUE
        for(p in prices){
            minP = min(minP,p)
            maxP = max(maxP, p-minP)
        }
       return maxP
    }
}