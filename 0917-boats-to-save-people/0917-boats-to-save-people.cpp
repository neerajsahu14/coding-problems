class Solution {
public:
    int numRescueBoats(vector<int>& arr, int limit) {
        unsigned freq[30001]={0};
        int maxW=0, minW=30001;
        for(int x: arr){
            freq[x]++;
            maxW=max(maxW, x);
            minW=min(minW, x);
        }
        for (int i=minW, j=0; i<=maxW; i++){
            int f=freq[i];
            fill(arr.begin()+j, arr.begin()+j+f, i);
            j+=f;
        }      
        int x=0;
        for(int l=0, r=arr.size()-1;l<=r; r--){
            x++;
            if (arr[l]+arr[r]<=limit)
                l++;          
        }
        return x;
    }
};