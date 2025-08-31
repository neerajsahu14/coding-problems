class Solution {
public:
    int minimumPushes(string word) {
        int ans=0;
        vector<int> mp(26,0);
        for(auto it:word){
            mp[it-'a']++;
        }
        sort(mp.begin(),mp.end(),greater<int>());
        for(int i=0;i<26;i++){
            if(i<8){
                ans+=mp[i];
            }
            else if(i<16){
                ans+= mp[i]*2;
            }
            else if(i<24)
            ans+= mp[i]*3;
            else
            ans+=mp[i]*4;
        }
        return ans;
    }
};