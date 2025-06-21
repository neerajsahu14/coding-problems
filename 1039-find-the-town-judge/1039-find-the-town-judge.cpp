class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if(trust.size()==0 && n==1) return 1;
        if(trust.size()==0 && n>1) return -1;
        unordered_map<int, int> mp;
        unordered_map<int, int> mp2;
        for(auto i : trust){
            mp[i[0]]++;
            mp2[i[1]]++;
        }
        for(int i=1; i<=n; i++){
           if (mp[i] == 0 &&  mp2[i]==n-1) return i;
        }
        return -1;
    }
};