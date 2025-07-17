class Solution {
public:
        vector<int>ans;
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n= nums1.size();
        int m= nums2.size();
        int i=0,j=0;
        while(i<n && j<m){
            if(nums1[i]<=nums2[j]){
                ans.push_back(nums1[i]);
                i++;
            }else{
                ans.push_back(nums2[j]);
                j++;
            }
        }
        while(i<n){
            ans.push_back(nums1[i]);
            i++;
        }
        while(j<m){
            ans.push_back(nums2[j]);
            j++;
        }
        int size = ans.size();
        if(size%2==0){
            return (double)(ans[(size-1)/2]+ans[(size-1)/2+1])/2.0;
        }
        return (ans[size/2]) * 1.0;
    }
};