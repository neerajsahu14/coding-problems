class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {       
        int n = candidates.size();
        vector<vector<int>> ans;
        vector<int> sol;

        function<void(int, int)> backtracking = [&](int i, int sum) {

            if(sum == target){
                ans.push_back(sol);
                return;
            }
            if(sum>target || i==n)
                return;

            backtracking(i+1, sum);
            sol.push_back(candidates[i]);
            backtracking(i,sum + candidates[i]);
            sol.pop_back();
        };
        backtracking(0,0);
        return ans;
    }
};