class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        int count=0;
        set<int> s{2, 3, 5, 7, 11, 13, 17, 19};
        for(;left<=right;left++){
            int set_bits = std::bitset<32>(left).count();
            if(s.count(set_bits))
                count++;
        }
        return count;
    }
};