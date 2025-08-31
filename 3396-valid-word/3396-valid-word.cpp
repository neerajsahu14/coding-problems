class Solution {
public:
    bool isValid(string s) {
        int count=0;
        int vowel=0;
        int constant=0;
        int cpital=0;
        int small=0;
        if(s.length()<3 ) return false;
            for(int i=0; i<s.length(); i++){
                 if(s[i]=='$' || s[i]=='#' || s[i]=='@')
                    return false;
                else if(s[i]-'0'<=9){
                    count++;
                }
                else if(s[i]=='a' || s[i]=='e' || s[i]=='i' ||s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' ||s[i]=='O' || s[i]=='U')
                    vowel++;
                else
                    constant++;
            }
        return (constant>0 && vowel>0);
    }
};