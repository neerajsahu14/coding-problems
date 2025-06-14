class Solution {
public:
    int minMaxDifference(int num) {
        string s = to_string(num);
        int n = s.size();
        string maxS = s;
        for(auto c : s){
            if(c != '9'){
                for(auto &ch : maxS){
                    if(ch == c) ch = '9';
                }
                break;
            }
        }
        string minS = s;
        for(auto c : s){
            if(c != '0'){
                for(auto &ch : minS){
                    if(ch == c) ch ='0'; 
                }
                break;
            }
        }
        int maxI = stoi(maxS);
        int minI = stoi(minS);
        cout<<maxI<<" "<<minI<<endl;
        return maxI - minI;
    }
};