class Solution {
public:
    string convert(string s, int numRows) {
    vector<string> ans(numRows);
    if(numRows==1){
        return s;
    }
    bool flag=false;
    int i=0;
    for(auto ch:s){
        ans[i]+=ch;
        if(i==0 || i==numRows-1){
            flag =!flag;
        }
        if(flag){
            i++;
        }
        if(!flag){
            i--;
        }
    }
    string n="";
    for(auto i:ans){
        n+=i;
    }
      return n;
    }
};