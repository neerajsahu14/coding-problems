class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int i=0; i<n; i++){
            if(nums[i]> 0) break;

            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }
            int l= i+1 ,r=n-1;
            while(r>l){
                int sum = nums[i]+ nums[r] + nums[l];
                if(sum == 0){
                    ans.push_back({nums[i], nums[r] ,nums[l]});
                    l++; r--;
                    while(r > l && nums[r]==nums[r+1]) r--;
                    while(r > l && nums[l]==nums[l-1]) l++;
                }
                else if(sum>0) r--;
                else l++;
            }
        }
        return ans;
    }
};