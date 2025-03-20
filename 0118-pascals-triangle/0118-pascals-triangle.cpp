class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> v;
        if(numRows==1) {
            v.push_back({1});
            return v;}
        if(numRows==2) {
            v.push_back({1});
            v.push_back({1,1});
            return v;
            }
        v.push_back({1});
        v.push_back({1,1});
        for(int i=2; i<numRows; i++){
            vector<int> temp = v[i-1];
            vector<int> curr;
            curr.push_back(1);
            for(int j=1;j<i;j++){
                curr.push_back(temp[j]+temp[i-j]);
            }
            curr.push_back(1);
            v.push_back(curr);
        }
        return v;
    }
};
