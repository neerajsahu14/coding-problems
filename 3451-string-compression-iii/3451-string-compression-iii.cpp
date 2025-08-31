class Solution {
public:
    string compressedString(string word) {
        string comp = "";
        int n = word.length();
   
        for(int i = 0; i < n;) {
        char c = word[i];
        int count = 1;
        while(i + count < n && word[i + count] == c && count < 9) {
           count++;
       }
       comp += to_string(count) + c;
       i += count;
    }
   
   return comp;
    }
};