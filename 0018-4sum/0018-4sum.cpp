class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
      int n = nums.size();
      vector<vector<int>> ans;
      sort(nums.begin(),nums.end());
      for(int i=0; i<n; i++){
        if(i>0 && nums[i]==nums[i-1]) continue;
        
        for(int j=i+1; j<n;j++){
            if(j>i+1 && nums[j]==nums[j-1]) continue;

            int lo =j+1, hi=n-1;
            while(lo<hi){
                long long sum = (long long)nums[i] + nums[j] + nums[lo] + nums[hi];
                if(sum == target){
                    ans.push_back({nums[i],nums[j],nums[lo],nums[hi]});
                    lo++;
                    hi--;
                    while(lo<hi && nums[lo]==nums[lo-1] ) lo++;
                    while(lo<hi && nums[hi]==nums[hi+1] ) hi--;
                }
                else if(sum>target) hi--;
                else lo++;
            }
        }
      }
      return ans;
    }


    // vector<vector<int>> solve(vector<int>& nums, int target,int sum, int i,vector<vector<int>> ans){
    //     if(ans.size()==4 && target == sum){
    //         return ans.;
    //     }
    //     solve(nums,target,sum+nums[i],i++,ans.push_back(nums[i]));
    //     solve(nums,target,sum+nums[i],i++,ans.push_back(nums[i]));
    // }

};