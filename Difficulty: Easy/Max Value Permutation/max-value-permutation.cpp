class Solution {
    
    #define MOD 1000000007
    
  public:
    int maxValue(vector<int> &arr) {
        // Complete the function
        int sum =0;
        sort(arr.begin(),arr.end());
        int n = arr.size();
        for(int i=0; i<n; i++){
            long long mul = (1LL * arr[i] * i) % MOD;
            sum = (sum+mul)%MOD;
        }
        return sum%MOD;
    }
};