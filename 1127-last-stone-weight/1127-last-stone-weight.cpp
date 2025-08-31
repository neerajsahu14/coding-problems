class Solution {
public:
    int lastStoneWeight(vector<int>& s) {
        priority_queue<int> pq(s.begin(),s.end());
        while(pq.size()>1){
            int r=pq.top();
            pq.pop();
            int l=pq.top();
            pq.pop();
            if(r-l!=0) pq.push(r-l);
        }
        if(pq.empty())
        return 0;
        return pq.top();
    
    }
};