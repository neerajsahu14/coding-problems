class Solution {
    fun summaryRanges(nums: IntArray): List<String> {
        val ans = mutableListOf<String>()
        val n = nums.size
        var i=0
        while(i<n){
            val st = nums[i]
            while(i<n-1 && nums[i]+1 == nums[i+1]){
                i++
            }
            val end = nums[i];
            if(st == end) ans.add(st.toString())
            else ans.add("${st}->${end}")
            i++
        }
            return ans
    }
}