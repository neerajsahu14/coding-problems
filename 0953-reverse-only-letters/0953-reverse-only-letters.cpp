class Solution {
public:
    string reverseOnlyLetters(string s) {
        int n=s.size();
        stack<char> st;
        for(int i=0;i<n; i++ ){
            if(((s[i]-'A')<26 && (s[i]-'A')>=0) || ((s[i]-'a')<26 && (s[i]-'a')>=0) )
            st.push(s[i]);
        }
        string ans="";
        for(int i=0; i<n; i++){
            if(((s[i]-'A')<26 && (s[i]-'A')>=0) || ((s[i]-'a')<26 && (s[i]-'a')>=0)){
            ans.push_back(st.top());
            st.pop();
            }
            else{
                ans.push_back(s[i]);
            }
        }
        return ans;
    }
};