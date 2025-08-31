class Solution {
public:
int solve(vector<int>& nums, int l,int curr){
    if(l==nums.size()) return curr;
    int incl=solve(nums,l+1,curr^nums[l]);
    int excl=solve(nums,l+1,curr);
    return excl+incl;
}
    int subsetXORSum(vector<int>& nums) {
        return solve(nums,0,0);
    }
};