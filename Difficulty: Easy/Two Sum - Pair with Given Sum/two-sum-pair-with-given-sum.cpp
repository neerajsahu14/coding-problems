class Solution {
  public:
    bool twoSum(vector<int>& arr, int k) {
        // code here
        set<int> st;
        int n = arr.size();
        for(int i=0; i<n;i++){
            if(st.find(arr[i])!= st.end()) return true;
            int diff = k-arr[i];
            st.insert(diff);
        }
        return false;
    }
};