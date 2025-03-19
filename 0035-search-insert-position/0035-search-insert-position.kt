class Solution {
    fun searchInsert(nums: IntArray, target: Int): Int {
        var l=0
        var r = nums.size-1
        while(l<=r){
            val mid = (l+r)/2
            if(nums[mid]==target) return mid
            else if(nums[mid]<target) l=mid+1
            else r=mid-1
        }
        return max(l,r)
    }
}