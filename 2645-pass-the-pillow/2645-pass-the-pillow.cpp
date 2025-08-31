class Solution {
public:
    int passThePillow(int n, int time) {
        int r= time%(n-1);
        int d=time/(n-1);
        if(d%2==0){
            return 1+r;
        }
        return n-r;
    }
};