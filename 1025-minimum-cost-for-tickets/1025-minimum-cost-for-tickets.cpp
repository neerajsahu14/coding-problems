class Solution {
public:
    int solve(int n,vector<int>& days, vector<int>& costs,int ind){
        if(ind>=n) return 0;
        // for one day pass
        int option1=costs[0]+solve(n,days,costs,ind+1);

        // for 7 days pass
        int i;
        int option2;
        for(i=ind;i<n && days[i]<days[ind]+7;i++){}

            option2=costs[1]+solve(n,days,costs,i);
        // for 30 days pass 
        int option3;
        for(i=ind;i<n && days[i]<days[ind]+30;i++){}

            option3=costs[2]+solve(n,days,costs,i);

            return min(option1, min(option2,option3));

    }
    int solveMem(int n,vector<int>& days, vector<int>& costs,int ind,vector<int>dp){
        if(ind>=n) return 0;
        // for one day pass
        if(dp[ind]!=-1) return dp[ind];

        int option1=costs[0]+solveMem(n,days,costs,ind+1,dp);

        // for 7 days pass
        int i;
        int option2;
        for(i=ind;i<n && days[i]<days[ind]+7;i++){}

        option2=costs[1]+solveMem(n,days,costs,i,dp);
        // for 30 days pass 
         int option3;
        for(i=ind;i<n && days[i]<days[ind]+30;i++){}

        option3=costs[2]+solveMem(n,days,costs,i,dp);

            return dp[ind] = min(option1, min(option2, option3));

    }
    int solveTab(int n, vector<int>& days, vector<int>& costs ){
        vector<int>dp(n+1,INT_MAX);
        dp[n]=0;
        for(int k=n-1;k>=0;k--){
            int option1=costs[0]+dp[k+1];

            // for 7 days pass
            int i;
            for(i=k;i<n && days[i]<days[k]+7;i++){}

            int option2=costs[1]+dp[i];
            // for 30 days pass 
            for(i=k;i<n && days[i]<days[k]+30;i++){}

            int option3=costs[2]+dp[i];

             dp[k] = min(option1, min(option2, option3));

        }
        return dp[0];
    }



    int solveOptimal(vector<int>& days, vector<int>& costs){
        int ans=0;
        queue<pair<int,int>> month;
        queue<pair<int,int>> week;
        for(auto day:days){
            while(!month.empty() && month.front().first+30<=day){
                month.pop();
            }
              while(!week.empty() && week.front().first+7<=day){
                week.pop();
            }
            month.push({day,ans+costs[2]});
            week.push({day,ans+costs[1]});
            ans=min(ans+costs[0],min(month.front().second,week.front().second));
        }   
        return ans;
    }
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        int n=days.size();
        // return solve(n,days,costs,0);
        // vector<int> dp(n+1,-1);
        // return solveMem(n,days,costs,0,dp);
        // return solveTab(n,days,costs);
        return solveOptimal(days,costs);
    }
};