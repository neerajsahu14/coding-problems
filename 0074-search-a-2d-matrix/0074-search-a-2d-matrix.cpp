class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int t) {
        int n= matrix.size();
        int m= matrix[0].size();
        for(int i=0; i<n;i++){
            if(matrix[i][m-1]>= t){
               return search(matrix[i],t);
            }
        }
        return false;
    }

    bool search(vector<int> arr, int t){
        int n= arr.size();
        int l =0, r=n-1;
        while(l<=r){
            int mid = (l+r)/2;
            if(arr[mid]==t){
                return true;
            }
            else if(arr[mid]>t){
                r=mid-1;
            }else{
                l=mid+1;
            }
        }
        return false;
    }
};