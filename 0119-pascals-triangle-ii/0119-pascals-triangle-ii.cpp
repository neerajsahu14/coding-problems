class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> v;
        if(rowIndex==0) {
            v.push_back({1});
            return v.back();}
        if(rowIndex==1) {
            v.push_back({1});
            v.push_back({1,1});
            return v.back();
            }
        v.push_back({1});
        v.push_back({1,1});
        for(int i=2; i<=rowIndex; i++){
            vector<int> temp = v[i-1];
            vector<int> curr;
            curr.push_back(1);
            for(int j=1;j<i;j++){
                curr.push_back(temp[j]+temp[i-j]);
            }
            curr.push_back(1);
            v.push_back(curr);
        }
        return v.back();
    }
};