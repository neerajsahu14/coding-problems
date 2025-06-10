class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int l =0, r=n-1;
        while(r>l){
            int m = (r+l)/2;
            if(nums[r]<nums[m])
                l = m+1;
            else
                r= m; 
        }
        int min_i = l;
        if(min_i == 0){
            l =0;
            r= n-1;
        }else if(target <=nums[min_i-1] && target >= nums[0]){
            l = 0;
            r = min_i -1;
        }else{
            l = min_i;
            r = n-1;
        }
        while(l<=r){
            int m = (r+l)/2;
            if(nums[m]==target) return m;
            if(nums[m]> target) r = m-1;
            else l = m+1;
        }
        return -1;
    }
};