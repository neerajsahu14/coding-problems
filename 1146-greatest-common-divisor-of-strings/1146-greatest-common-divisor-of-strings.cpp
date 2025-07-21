class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if (str1 + str2 != str2 + str1) {
            return "";
        }
        int len1 = str1.length();
        int len2 = str2.length();
        int gcd = c_Gcd(len1,len2);
        return str1.substr(0,gcd);
    }
    int c_Gcd(int a, int b){
        while(b){
            int t =b;
            b= a%b;
            a=t;
        }
        return a;
    }
};