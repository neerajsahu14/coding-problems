class Solution {
public:
    int countTriplets(vector<int>& arr) {
        int n=arr.size();
        vector<int> v(n+1,0);
        for(int i=0; i<n; i++){
            v[i+1]=v[i]^arr[i];
        }
        int cout=0;
        for(int i=0; i<n; i++){
            for(int j=i+1;j<n;j++){
                if(v[i]==v[j+1]){
                    cout+=(j-i);
                }
            }
        }
        return cout;
    }
};