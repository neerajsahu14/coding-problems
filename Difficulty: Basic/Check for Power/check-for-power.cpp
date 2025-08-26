class Solution {
  public:
    int isPowerOfAnother(int X, int Y) {
        // code here
        int t = Y;
        while(t!=1){
            if(t/X==t || t%X!=0) return 0;
            t/=X;
        }
        return 1;
    }
};