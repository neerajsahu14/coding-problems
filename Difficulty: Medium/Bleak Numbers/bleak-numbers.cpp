class Solution {
  public:
  
    unsigned int countSetBits(unsigned int n){
        unsigned int count = 0;
        while (n) {
            count += n & 1;
            n >>= 1;
        }
        return count;
    }
    
    int is_bleak(int n) {
        // Code here.
        int life=31;
	    int x=n;
	    while(life-- and x>=0){
	        if(x+__builtin_popcount(x)==n)return 0;
	        x--;
	    }
	    return 1;
    }
};
