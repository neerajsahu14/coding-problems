class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        int start = 0;
        int end = 1;
        int l,h;
        for(int i=0;i<n;i++){
            h=i;
            l=i-1;
            while(h<n && l>=0 && s[l]==s[h]){
                if(h-l+1>end){
                    start = l;
                    end = h-l+1;
                }
                h++;
                l--;
            }
            h=i+1;
            l=i-1;
            while(h<n && l>=0 && s[l]==s[h]){
                if(h-l+1>end){
                    start = l;
                    end = h-l+1;
                }
                h++;
                l--;
            }
        }
        return s.substr(start,end);
    }
};