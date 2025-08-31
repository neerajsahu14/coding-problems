class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& cust) {
        
        double waiting_time= cust[0][1];
        int comp_prev= cust[0][0]+cust[0][1];

        for(int i=1; i<cust.size();i++){
            vector<int> time= cust[i];
            int arrived= time[0];

            int start= max(arrived,comp_prev);
            int end= start+time[1];
            comp_prev=end;
            waiting_time+= end-arrived;
        }
        return waiting_time/cust.size();
    }
};