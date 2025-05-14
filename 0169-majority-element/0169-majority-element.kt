class Solution {
    fun majorityElement(nums: IntArray): Int {
        var ans = nums[0]
        var count =1
        for(i in 0 until nums.size){        
            if(nums[i]==ans){
                count++
            }else{
                count--;
            }
            if(count==0){
                ans = nums[i]
                count=1
            }
        }
        return ans
    }
}