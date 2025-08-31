class Solution {
public:
    int maximumEnergy(vector<int>& energy, int k) {
        int n=energy.size();
        int maxi=INT_MIN;
        for(int i=n-1;i>=n-k; i--){
            int ans=0;
            for(int j=i;j>=0;j-=k){
                ans+=energy[j];
                maxi=max(maxi,ans);
            }
        }
        return maxi;
    }
};