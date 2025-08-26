class Solution {
  public:
    int gcd(int n, vector<int> arr) {
        // Your code goes here
        int ans = arr[0];
        for(int i=1; i<n; i++){
            ans = gcd(ans,arr[i]);
        }
        return ans;
    }
    int gcd(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
};
