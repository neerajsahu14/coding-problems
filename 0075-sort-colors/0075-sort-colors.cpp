class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int one =0;
        int zero =0;
        for(int i=0; i<n; i++){
            if(nums[i]==0) zero++;
            if(nums[i]==1) one++;
        }
        int i=0;
        while(i<zero){
            nums[i]=0;
            i++;
        }
        while(i<one+zero){
            nums[i]=1;
            i++;
        }
        while(i<n){
            nums[i]=2;
            i++;
        }
    }
};