class Solution {
    fun containsDuplicate(nums: IntArray): Boolean {
        val mp = mutableMapOf<Int,Int>()
        for(n in nums){
            if(mp[n]==1) return true
        mp[n] = 1
        }
        return false
    }
    
}