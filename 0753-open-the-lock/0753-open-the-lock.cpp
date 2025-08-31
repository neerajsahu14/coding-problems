class Solution {
public:
    int openLock(vector<string>& deadends, string target) {
        unordered_set<string> s(deadends.begin(),deadends.end());
        if(s.count("0000"))
            return -1;
            queue<pair<string,int>>q;
            q.push({"0000",0});
            unordered_set<string> vis;
            vis.insert("0000");
            while(!q.empty()){
                auto curr=q.front();
                q.pop();
                string currcom =curr.first;
                int mov=curr.second;
                if(currcom==target){
                    return mov;
                }
            for(int i=0; i<4; i++){
                for(int delta: {-1,1}){
                    int New=(currcom[i]-'0'+delta+10)%10;
                    string Newcom=currcom;
                    Newcom[i]='0'+New;
                    if(vis.find(Newcom)==vis.end() && s.find(Newcom)==s.end()){
                        vis.insert(Newcom);
                        q.push({Newcom,mov+1});
                    }
                }
            }
        }
        return -1;    
    }
};