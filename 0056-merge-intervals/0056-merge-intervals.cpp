class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {
        int n=arr.size();
        vector<vector<int>> ans;
        sort(arr.begin(),arr.end());
        ans.push_back({arr[0][0],arr[0][1]});
        for(int i=1; i<n; i++){
            if(ans.back()[1]<arr[i][0]){
                ans.push_back(arr[i]);            
            }
            else{
                ans.back()[1] = max(arr[i][1],ans.back()[1]);
            }
        }
        return ans;
    }
};