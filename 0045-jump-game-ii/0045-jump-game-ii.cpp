class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n,-1);
        return solve(0,nums,dp);
    }
    int solve(int i, vector<int> &nums, vector<int>& dp){
        if(nums.size()-1<=i) return 0;
        if(nums[i]==0) return INT_MAX;

        if(dp[i] != -1) return dp[i];

        int minJump = INT_MAX;
        for(int j=1; j<=nums[i]; j++){
            int res = solve(i+j,nums,dp);
            if(res!= INT_MAX)
                minJump = min(minJump,1+res);
        }
        return dp[i] = minJump;
    }
};