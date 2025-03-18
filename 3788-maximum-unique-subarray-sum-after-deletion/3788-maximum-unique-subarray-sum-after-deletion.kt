class Solution {
    fun maxSum(nums: IntArray): Int {
        var mx= Int.MIN_VALUE
        var sum =0
        val s = HashSet<Int>()
        for(num in nums){
            mx = maxOf(mx,num)
            if(num<=0 || s.contains(num)) continue 
            sum+=num
            s.add(num)
        }
        return if(mx<= 0) mx else sum
    }
}