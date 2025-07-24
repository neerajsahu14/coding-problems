class Solution {
  public:
    bool twoSum(vector<int>& arr, int k) {
        // code here
        sort(arr.begin(),arr.end());
        int l=0, r= arr.size()-1;
        while(l<r){
            if(arr[l]+arr[r]==k) return true;
            else if(arr[l]+arr[r]<k) l++;
            else r--;
        }
        return false;
    }
};