class Solution {
    fun combinationSum(nums: IntArray, target: Int): List<List<Int>> {
        val ans = mutableListOf<List<Int>>()
        val sol = mutableListOf<Int>()
        val n = nums.size

        fun backtracking(i : Int, sum : Int){
            if(sum == target){
                ans.add(ArrayList(sol))
                return
            }
            if(sum> target || i == n) return

            backtracking(i+1,sum)
            sol.add(nums[i])
            backtracking(i,sum+nums[i])
            sol.removeAt(sol.size-1)
        }
        backtracking(0,0)
        return ans
    }
}