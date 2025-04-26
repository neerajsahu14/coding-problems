class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        set<int> row;
        set<int> col;
        // for(int i=0; i<n; i++){
        //     for(int j=0; j<m;j++){
        //         if(matrix[i][j]==0){
        //             if(row.find(i) == row.end()){
        //                 bool check =false;
        //                 int a=i+1;
        //                 while(a<n){
        //                     ans[a][j] = 0;
        //                     if(matrix[a][j]==0)
        //                         check=true;
        //                     a++;
        //                 }
        //                 a=i-1;
        //                 while(a>=0){
        //                     ans[a][j] = 0;
        //                     a--;    
        //                 }
        //                 if(!check)
        //                     row.insert(i);
        //             }
        //             if(col.find(j) == col.end()){
        //                 int a=j+1;
        //                 bool check = false;
        //                 while(a<m){
        //                     ans[i][a] = 0;
        //                     if(matrix[i][a]==0)
        //                         check=true;
        //                     a++;  
        //                 }
        //                 a=j-1;
        //                 while(a>=0){
        //                     ans[i][a] = 0;
        //                     a--;    
        //                 }
        //                 if(!check)
        //                     col.insert(j);
        //             }
        //         }
        //     }
        // }
        // matrix = ans;
        // Identify rows and columns with zeros
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(matrix[i][j] == 0) {
                    row.insert(i);
                    col.insert(j);
                }
            }
        }
    
        // Zero out identified rows
        for(int r : row) {
            for(int j = 0; j < m; j++) {
                matrix[r][j] = 0;
            }
        }
        
        // Zero out identified columns
        for(int c : col) {
            for(int i = 0; i < n; i++) {
                matrix[i][c] = 0;
            }
        }
        
    }
};