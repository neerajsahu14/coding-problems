class Solution {
public:
    bool isValid(string s) {
        int n = s.size();
        if(n%2==1) return false;
        stack<int> st;
        for(auto ch : s){
            // if(ch =='(' ||ch =='[' || ch =='{' )
            //     st.push(ch);
            // else{
            //     if(st.empty()) return false;
            //     char top = st.top();
            //     st.pop();
            //     if(( ch ==')' && top !='(') ||
            //         ( ch =='}' && top !='{') ||
            //         ( ch ==']' && top !='[')
            //     ) return false;
            // }
            switch(ch){
                case '{' : case '[' : case '(' :
                    st.push(ch);
                    break;
                case ')':
                    if (st.empty() || st.top() != '(') return false;
                    st.pop();
                    break;
                case '}':
                    if (st.empty() || st.top() != '{') return false;
                    st.pop();
                    break;
                case ']':
                    if (st.empty() || st.top() != '[') return false;
                    st.pop();
                    break;   
            }    
        }
        return st.empty();
    }
};