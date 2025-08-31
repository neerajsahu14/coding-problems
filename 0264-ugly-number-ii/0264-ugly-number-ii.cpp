#include <queue>
#include <unordered_set>

class Solution {
public:
    int nthUglyNumber(int n) {
        std::priority_queue<long, std::vector<long>, std::greater<long>> minHeap;
        std::unordered_set<long> seen;
        
        minHeap.push(1);
        seen.insert(1);
        
        long uglyNumber = 1;
        
        for (int i = 0; i < n; ++i) {
            uglyNumber = minHeap.top();
            minHeap.pop();
            
            // Generate new ugly numbers by multiplying with 2, 3, and 5
            if (seen.find(uglyNumber * 2) == seen.end()) {
                minHeap.push(uglyNumber * 2);
                seen.insert(uglyNumber * 2);
            }
            if (seen.find(uglyNumber * 3) == seen.end()) {
                minHeap.push(uglyNumber * 3);
                seen.insert(uglyNumber * 3);
            }
            if (seen.find(uglyNumber * 5) == seen.end()) {
                minHeap.push(uglyNumber * 5);
                seen.insert(uglyNumber * 5);
            }
        }
        
        return static_cast<int>(uglyNumber);
    }
};
