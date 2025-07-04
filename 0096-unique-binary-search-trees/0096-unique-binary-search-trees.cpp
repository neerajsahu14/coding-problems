class Solution {
public:
    int numTrees(int n) {
        vector<int> ans(n+1,1);
        for(int node=2; node<n+1;node++){
            int total = 0;
            for(int root =1; root<node+1; root++){
                int left = root -1;
                int right = node - root;
                total += ans[left]*ans[right];
                ans[node] = total;
            }
        }
        return ans[n];
    }
};