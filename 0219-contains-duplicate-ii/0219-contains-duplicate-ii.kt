class Solution {
    fun containsNearbyDuplicate(nums: IntArray, k: Int): Boolean {
        val n =nums.size
        val mp = mutableMapOf<Int,Int>()
        for (i in 0 until n){
            if (mp.containsKey(nums[i]) && i - mp.getValue(nums[i]) <= k) {
                return true
            }
            mp[nums[i]] =i
        }
        return false
    }
}