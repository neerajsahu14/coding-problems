class Solution {
public:
    int heightChecker(vector<int>& v) {
        vector<int> temp=v;
        int c=0;
        sort(temp.begin(),temp.end());
        for(int i=0; i<v.size();i++){
            if(v[i]!=temp[i])
            c++;
        }
        return c;
    }
};