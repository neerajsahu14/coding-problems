class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int p=nums1.size()+nums2.size();
        int a[p];
        int k=0;
        for(int i=0; i<nums1.size(); i++)
            a[i]=nums1[i];
        for(int i=nums1.size(); i<p; i++){
            a[i]=nums2[k];
            k++;
        }
        sort(a,a+(p));
        if(p%2==0)
            return (double) (a[p/2]+(a[(p/2)-1]))/2.0;
        else
        return (double) a[p/2];
        }
};