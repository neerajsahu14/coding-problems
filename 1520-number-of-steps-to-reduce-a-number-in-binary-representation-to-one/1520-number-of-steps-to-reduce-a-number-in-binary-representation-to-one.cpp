class Solution {
public:
    int numSteps(string s) {
        int carry=0,step=0; 
        for(int i=s.length()-1;i>0;i--){
            if((s[i]-'0')+carry==1){
                step+=2;
                carry=1;
            }
            else{
                step++;
            }
        }
        return step+carry;
    }
};