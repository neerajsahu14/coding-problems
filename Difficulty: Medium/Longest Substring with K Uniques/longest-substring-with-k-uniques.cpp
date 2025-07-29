class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        // code here
        int max_l = -1;
        int n = s.size();
        
        unordered_map<char, int> count;
        int st =0;
        for(int i=0; i<n; i++){
            count[s[i]]++;
            while(count.size()>k){
                count[s[st]]--;
                if(count[s[st]]==0){
                    count.erase(s[st]);
                }
                st++;
            }
            if(count.size()==k){
                max_l = max(max_l,i-st+1);
            }
        }
        
        return max_l;
    }
};