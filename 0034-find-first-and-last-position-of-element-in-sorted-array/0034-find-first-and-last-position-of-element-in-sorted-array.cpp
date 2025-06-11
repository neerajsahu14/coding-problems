class Solution {
public:
     vector<int> searchRange(vector<int>& nums, int target) {
        int left = findBound(nums, target, true);
        int right = findBound(nums, target, false);
        return {left, right};
    }

private:
    int findBound(vector<int>& nums, int target, bool isFirst) {
        int l = 0, r = nums.size() - 1;
        int bound = -1;

        while (l <= r) {
            int m = l + (r - l) / 2;

            if (nums[m] == target) {
                bound = m;
                if (isFirst) {
                    r = m - 1; // keep searching left
                } else {
                    l = m + 1; // keep searching right
                }
            } else if (nums[m] < target) {
                l = m + 1;
            } else {
                r = m - 1;
            }
        }

        return bound;
    }
};