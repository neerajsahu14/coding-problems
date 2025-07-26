class Solution {
  public:
    string reverseWords(string &s) {
        // code here
        stringstream ss(s);
        vector<string> ans;
        string word;
        while(getline(ss, word, '.')){
            if(!word.empty())
                ans.push_back(word);
        }
        int n = ans.size();
        string res;
        for(int i= n-1; i>=0;i--){
            res+=ans[i];
            if(i!=0) res+='.';
            
        }
        return res;
    }
};