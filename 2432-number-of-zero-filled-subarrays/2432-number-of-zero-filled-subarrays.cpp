class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        int n = nums.size();
        long long count =0;
        int cZero = 0;
        for(int i=0; i<n; i++){
            if(nums[i]==0){ 
                cZero++;
                count += cZero;
            }
            else{
                cZero =0;
            }
        }
        
        return count;
    }
};