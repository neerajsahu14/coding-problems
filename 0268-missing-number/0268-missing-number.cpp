class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int prev = nums[0];
        if(prev) return 0;
        for(int i=1;i<n; i++){
            if(nums[i]-prev==1) prev = nums[i];
            else{
                return prev+1;
            }
        }
        return n;
    }
};