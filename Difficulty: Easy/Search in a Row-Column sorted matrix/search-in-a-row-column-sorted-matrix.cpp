// User function template for C++
class Solution {
  public:
    bool matSearch(vector<vector<int>> &mat, int x) {
        int n = mat.size();
        for(int i=0; i<n; i++){
           if(binarySearch(mat[i],x))
           return true;
        }
        return false;
        
    }
    
    bool binarySearch(vector<int> &arr, int x){
        int l=0, r = arr.size()-1;
        
        while(l<=r){
           int mid = (l+r)/2;
           if(arr[mid]==x) return true;
           if(arr[mid]>x){
               r = mid-1;
           }else{
               l = mid+1;
           }
        }
        return false;
    }
    
};

