class Solution {

  public:
    long long countTriplets(int n, long long sum, long long arr[]) {
        // Your code goes here
        sort(arr, arr+n);
        long long count =0;
        for(int i=0; i<n-2; i++){
            int l = i+1;
            int r = n-1;
            while(l<r){
                long long curr = arr[i] + arr[l] + arr[r];
                if(curr<sum){
                    count +=(r-l);
                    l++;
                }else{
                    r--;
                }
            }
        }
        return count;
    }
};