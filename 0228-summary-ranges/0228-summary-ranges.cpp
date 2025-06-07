class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        int n= nums.size();
        for(int i=0; i<n; i++){
            int start = nums[i];

            // Move forward while the next number is exactly 1 greater than the current
            while (i + 1 < n && nums[i + 1] == nums[i] + 1) {
                i++;
            }

            int end = nums[i];  // end of the current range

            if (start == end) {
                ans.push_back(to_string(start));
            } else {
                ans.push_back(to_string(start) + "->" + to_string(end));
            }
        }
        return ans;
    }
};