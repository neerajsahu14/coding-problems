class Solution {
public:
    int minOperations(string s) {
        int count1 =0;
        for(int i=0; i<s.size();i++){
            if(s[i]-'0'==i%2)
            count1++;
                 }
                 int count0=s.size()-count1;
        return min(count0, count1);
    }
};