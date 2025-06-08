class Solution {
    fun maxArea(height: IntArray): Int {
       val n =  height.size
       var r = n-1
       var l = 0
       var max_area = 0
       while(r>l){
            val h = min(height[r],height[l])
            val w = r-l
            val area = w*h
            max_area = max(max_area,area)

            if(height[r]<height[l]){
                r--;
            }else{
                l++;
            }
       }
       return max_area;
    }
}