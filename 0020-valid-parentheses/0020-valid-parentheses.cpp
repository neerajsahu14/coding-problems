class Solution {
public:
    bool isValid(string s) {
        int n = s.size();
        if(n%2==1) return false;
        stack<int> st;
        for(auto ch : s){
            if(ch =='(' ||ch =='[' || ch =='{' )
                st.push(ch);
            else{
                if(st.empty()) return false;
                char top = st.top();
                st.pop();
                if(( ch ==')' && top !='(') ||
                    ( ch =='}' && top !='{') ||
                    ( ch ==']' && top !='[')
                ) return false;
            }    
        }
        return st.empty();
    }
};