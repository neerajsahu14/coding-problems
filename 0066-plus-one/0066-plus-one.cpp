class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for(int i=digits.size()-1; i>=0; i--){
            if(digits[i]<9){
                digits[i]++;
                return digits;
            }
            else
                digits[i]=0;
        }
        int a=digits.size()+1;
    digits.resize(a);
        digits[a-1]=0;
        digits[0]=1;
        return digits;
    }
};