class Solution {
    public long numberOfPairs(int[] nums1, int[] nums2, int k) {
        Map<Integer, Integer> freqMap = new HashMap<>();
        long count = 0;
        for (int num : nums2) {
            freqMap.put(num, freqMap.getOrDefault(num, 0) + 1);
        }
        for (int num1 : nums1) {
            if (num1 % k == 0) {
                int target = num1 / k;
                for (int factor = 1; factor * factor <= target; factor++) {
                    if (target % factor == 0) {
                        count += (long) freqMap.getOrDefault(factor, 0);
                        if (factor != target / factor) {
                            count += (long) freqMap.getOrDefault(target / factor, 0);
                        }
                    }
                }
            }
        }
        
        return count;
    }
}