class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        int ans1 =0,ans2=0,cnt1=0,cnt2=0;
        for(int i: nums){
            if(i==ans1){
                cnt1++;
            }else if(i==ans2){
                cnt2++;
            }else if(cnt1 == 0){
                ans1 = i;
                cnt1=1;
            }else if(cnt2==0){
                ans2=i;
                cnt2=1;
            }else{
                cnt1--;
                cnt2--;
            }
        }
        cnt1=0;
        cnt2=0;
        for(int i:nums){
            if(i==ans1) cnt1++;
            else if(i==ans2) cnt2++;
        }
        vector<int> ans;
        if(cnt1>n/3) ans.push_back(ans1);
        if(cnt2>n/3) ans.push_back(ans2);
        return ans;
    }
};