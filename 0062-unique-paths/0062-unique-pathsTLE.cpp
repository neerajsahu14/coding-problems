class Solution {

    int solve(int m, int n,int a, int b){
        if (a > m || b > n) {
            return 0;
        }
        int ans =0;
        if(a ==m && b==n){
            return 1;
        }
        ans+=solve(m,n,a+1,b);
        ans+=solve(m,n,a,b+1);
        return ans;

    }
public:
    int uniquePaths(int m, int n) {
        return solve(m,n,1,1);
    }
};
