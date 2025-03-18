class Solution {
    fun removeDuplicates(nums: IntArray): Int {
      if (nums.isEmpty()) return 0

        var i=1
        for(j in 1 until nums.size){
            if (nums[j] != nums[i-1]) {
                nums[i]=nums[j]
                i++
            }
        }
        return i
    }
}

/*
 0,1,2,2,3,4,5,5,5,6

 0,1,2, [0,1,2,2,3,4,5,5,6] till same 
 i=3,j=3 nums[i-1,j]== 2 not change J++;  [0,1,2,2,3,4,5,5,6]
 i=3, j=4 nums[i-1,j] != now nums[i] = naum[j]  nums[3] = 3, [0,1,2,3,3,4,5,5,6] i++ , j++;
 i=4 j=5 nums[i-1,j]!= now nums[i] = naum[j]  nums[4] = 3, [0,1,2,3,4,4,5,5,6] i++ , j++;
 i=5 j=6 nums[i-1,j]!= now nums[i] = naum[j]  nums[4] = 3, [0,1,2,3,4,5,5,5,6] i++ , j++;
 i=6 j=7 nums[i-1,j]= 5 not change J++; [0,1,2,3,4,5,5,5,6]
i=6 j=8 nums[i-1,j]!=  now nums[i] = naum[j]  nums[6] = 6, [0,1,2,3,4,5,6,5,6] i++ , j++;
*/