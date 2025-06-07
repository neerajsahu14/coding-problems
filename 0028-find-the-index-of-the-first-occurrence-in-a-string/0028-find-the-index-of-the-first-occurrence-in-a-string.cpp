class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size();
        int m = needle.size();
        for(int i=0; i<=n-m;i++){
            string substr = haystack.substr(i,m);
            if(substr==needle) return i;
        }
        return -1;
    }
};