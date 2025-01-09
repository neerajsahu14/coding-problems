class Solution {
    fun triangleNumber(nums: IntArray): Int {
        val n = nums.size
        var count =0
        nums.sort()
        for(i in n-1 downTo 2){
            var a=0
            var b=i-1
            while(a<b){
              val  sum = nums[a]+nums[b]
                if(sum>nums[i]){
                    count += (b-a)
                    b--
                }else{
                    a++
                }
            }
        }
        return count
    }
}