class Solution {
public:

    int solve(vector<int>& satisfaction, int index, int time){
        if(index==satisfaction.size()) return 0;
        int incl=satisfaction[index]*(time+1)+solve(satisfaction,index+1,time+1);
        int excl=solve(satisfaction,index+1,time);
        return max(incl,excl);
    }

    int solve(vector<int>& satisfaction, int index, int time,vector<vector<int>>& dp){
        if(index==satisfaction.size()) return 0;
        if(dp[index][time]!=-1) return dp[index][time];
        int incl=satisfaction[index]*(time+1)+solve(satisfaction,index+1,time+1);
        int excl=solve(satisfaction,index+1,time);
        dp[index][time]=max(incl,excl);
         return dp[index][time];
    }



    int solve(vector<int>& satisfaction){
        int n=satisfaction.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1,0));
        for(int index=n-1; index>=0; index--){
            for(int time=n-1; time>=0;time--){
                int incl=satisfaction[index]*(time+1)+dp[index+1][time+1];
        int excl=dp[index+1][time];
        dp[index][time]=max(incl,excl);
            }
        }
        return dp[0][0];
    }


    int solveT(vector<int>& satisfaction){
        int n=satisfaction.size();
        vector<int>next(n+1,0);
        vector<int>curr(n+1,0);
        for(int index=n-1; index>=0; index--){
            for(int time=n-1; time>=0;time--){
                int incl=satisfaction[index]*(time+1)+curr[time+1];
                int excl=0+curr[time];
                next[time]=max(incl,excl);
            }
            curr=next;
        }
        return curr[0];
    }


    int maxSatisfaction(vector<int>& satisfaction) {
        sort(satisfaction.begin(),satisfaction.end());
        // return solve(satisfaction,0,0);
        int n=satisfaction.size();
        // vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        // return solve(satisfaction,0,0,dp);

        return solveT(satisfaction);
    }
};