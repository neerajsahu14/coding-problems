class Solution {
public:
    int maxSum(vector<int>& nums) {
        int mx=INT_MIN;
        int sum =0;
        set<int> s;
        for(int i=0; i<nums.size(); i++){
            mx = max(nums[i],mx);
            if(nums[i]<=0 || s.find(nums[i])!= s.end()) continue;
            sum+= nums[i];
            s.insert(nums[i]);
        }
        return (mx<=0)?mx: sum;
    }
};