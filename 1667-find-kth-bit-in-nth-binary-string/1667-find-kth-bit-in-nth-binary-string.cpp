class Solution {
public:
    char findKthBit(int n, int k) {
        string s="0";
        for(int i=0; i<n; i++){
            s+="1";
            for(int j=s.size()-2;j>=0;j--){
                s+= (s[j]=='0'?'1':'0');
            }
        }
        return s[k-1];
    }
};