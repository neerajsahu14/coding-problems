class Solution {
public:
    int solve(vector<int>& nums,int i, int k,unordered_map<int,int>& mp){
        if(i==nums.size()) return 1;
        int take=0;
        if(!mp[nums[i]-k]&& !mp[nums[i]+k] ){
            mp[nums[i]]++;
            take=solve(nums,i+1,k,mp);
            mp[nums[i]]--;
        }
        int notTake=solve(nums,i+1,k,mp);
        return take+notTake;
    }
    int beautifulSubsets(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        return solve(nums,0,k,mp)-1;

    }
};