class Solution {
    fun myPow(x: Double, n: Int): Double {
       var ans = 1.0
       var xx =x
       var nn = n.toLong()
       if(n<0) nn = -nn
       while(nn>0){
        if (nn % 2 == 1L) {
            ans *= xx
            nn--
        }else{
            xx*=xx
            nn/=2
        }
       }
       if(n<0) ans = (1/ans).toDouble()
       return ans
    }
}