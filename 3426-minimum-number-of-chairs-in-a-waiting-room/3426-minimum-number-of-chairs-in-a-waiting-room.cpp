class Solution {
public:
    int minimumChairs(string s) {
        int currentChairs = 0;
    int minChairs = 0;

    for(char c : s) {
        if(c == 'E') {
            currentChairs++;
            minChairs = std::max(minChairs, currentChairs); 
        } else if(c == 'L') {
            currentChairs--; 
        }
    }

    return minChairs;
    }
};