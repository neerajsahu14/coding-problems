class Solution {
    fun threeSumClosest(nums: IntArray, target: Int): Int {
        val n = nums.size
        var ans = Int.MAX_VALUE
        nums.sort()
        for(i in 0 until n){
            if(i>0 && nums[i]==nums[i-1]) continue
            var r = n-1
            var l=i+1
            while(r>l){
                val sum =  nums[i]+ nums[r] + nums[l]
                if(abs(sum - target)< abs(ans-target)){
                    ans = sum 
                }
                if(ans == target) return ans
                else if(sum >= target ) r--
                else l++
            }
        }
        return ans
    }
}