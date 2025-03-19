class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int midx = m-1;
        int nidx = n-1;
        int r= n+m-1;
        while(nidx>=0){
            if(midx>=0 && nums2[nidx]<=nums1[midx]){
                nums1[r] = nums1[midx];
                midx--;
            }else{
                nums1[r] = nums2[nidx];
                nidx--;
            }
            r--;
        }
    }
};