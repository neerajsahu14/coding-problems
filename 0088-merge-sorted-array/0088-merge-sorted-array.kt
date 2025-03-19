class Solution {
    fun merge(nums1: IntArray, m: Int, nums2: IntArray, n: Int): Unit {
        var midx = m-1
        var nidx = n-1
        var r= m+n-1
        while(nidx>=0){
            if(midx>=0 && nums1[midx]>=nums2[nidx]){
                nums1[r] = nums1[midx]
                midx-- 
            }else{
                nums1[r] = nums2[nidx]
                nidx-- 
            }
            r--
        }
    }
}