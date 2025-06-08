class Solution {
    fun threeSum(nums: IntArray): List<List<Int>> {
        val n = nums.size
        val ans = mutableListOf<MutableList<Int>>()
        nums.sort()
        for(i in 0 until n){
            if(nums[i]>0) break
            if(i>0 && nums[i]==nums[i-1]) continue
            var r = n-1
            var l=i+1
            while(r>l){
                val sum =  nums[i]+ nums[r] + nums[l]
                if(sum == 0){
                    ans.add(mutableListOf(nums[i], nums[r], nums[l]))
                    l++
                    r--
                    while(r>l && nums[r] == nums[r+1]) r--
                    while(r>l && nums[l] == nums[l-1]) l++
                }
                else if(sum >0) r--
                else l++
            }
        }
        return ans
    }
}