class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int> ans;
        for(int i=0; i<n;i++){
            int pri=0;
            for(int j=i;j<n;j++){
                pri+=nums[j];
                ans.push_back(pri);
            }
        }
        int res=0;
        int mod= 1000000007;
        sort(ans.begin(),ans.end());
        for(int i=left-1;i<right;i++)
        res=(res+ans[i])%mod;
        return res;
    }
};