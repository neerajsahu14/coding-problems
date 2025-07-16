class Solution {
public:
    int uniquePathsIII(vector<vector<int>>& grid) {
        int zCount =0;
        int sx,sy =0;
        for(int i=0; i<grid.size();i++){
            for(int j = 0; j<grid[0].size(); j++){
                if(grid[i][j]==0) zCount++;
                else if(grid[i][j]==1){
                    sx=i;
                    sy=j;
                }
            }
        }
        return dfs(sx,sy,zCount,grid);
    }
    int dfs(int r, int c, int count, vector<vector<int>> grid){
        if(r<0 || c<0 || r>=grid.size() || c>=grid[0].size() || grid[r][c]==-1 ) return 0;

        if(grid[r][c]==2) return count == -1? 1 : 0;

        grid[r][c]=-1;
        int result = dfs(r+1,c,count-1,grid) + dfs(r-1,c,count-1,grid)
         + dfs(r,c+1,count-1,grid) + dfs(r,c-1,count-1,grid);
        grid[r][c]=0; 
        return result; 
    }
};

// ans = dfs(i+1,j) +dfs(i-1,j) + dfs(i,j+1) +dfs(i,j-1);