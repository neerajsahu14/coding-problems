class Solution {
public:
    int maxScore(string s) {
        int maxscore =0;
        int zeros =0, ones=0;
        for(char ch :s){
            if(ch=='1')
            ones++;
        }
        for(int i=0; i<s.length()-1;i++){
            if(s[i]=='0')
            zeros++;
            else
            ones--;
            maxscore=max(maxscore,ones+zeros);
        }
        return maxscore;
    }
};