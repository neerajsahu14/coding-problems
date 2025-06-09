class Solution {
    fun fourSum(nums: IntArray, target: Int): List<List<Int>> {
        val n = nums.size
        nums.sort()
        val ans = mutableListOf<List<Int>>()
        for( i in 0 until n){
            if(i>0 && nums[i]==nums[i-1])
                continue;
            
            for(j in i+1 until n){
                if(j>i+1 && nums[j]==nums[j-1])
                    continue
                var lo = j+1
                var hi = n-1
                while(lo<hi){
                    val sum = 1L*nums[i] + nums[j] + nums[lo] + nums[hi]
                    if(sum == target.toLong()){
                        ans.add(listOf(nums[i],nums[j],nums[lo],nums[hi]))
                        lo++
                        hi--
                        while(lo<hi && nums[lo]==nums[lo-1] ) lo++
                        while(lo<hi && nums[hi]==nums[hi+1] ) hi--
                    }
                    else if(sum>target.toLong()) hi--
                    else lo++
                } 
            }    
        }
        return ans
    }
}