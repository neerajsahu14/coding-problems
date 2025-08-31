class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int n=s.size();
        int st=0;
        int cc=0;
        int maxl=0;
        for(int ed=0;ed<n; ed++){
            cc+=abs(s[ed]-t[ed]);
            while(cc>maxCost){
                cc-=abs(t[st]-s[st]);
                st++;
            }
            maxl=max(maxl,ed-st+1);
        }
        return maxl;
    }
};