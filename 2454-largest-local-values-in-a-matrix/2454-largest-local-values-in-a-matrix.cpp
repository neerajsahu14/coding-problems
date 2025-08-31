class Solution {
public:
    int largestLocalUtil(vector<vector<int>>& grid, int x, int y) {
        int maxi = 0;
        
        for (int i = x ; i < x+3 ; i++) {
            for (int j = y ; j < y+3 ; j++) {
                maxi = max(maxi, grid[i][j]);
            }
        }
        
        return maxi;
    }
    
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n = grid.size();
        
        int m = n-2;
        
        vector<vector<int>> ans(m,vector<int>(m, 0));
        
        for (int i = 0 ; i < m ; i++) {
            for (int j = 0 ; j < m ; j++) {
                ans[i][j] = largestLocalUtil(grid, i, j);
            }
        }
        
        return ans;  
    }
};