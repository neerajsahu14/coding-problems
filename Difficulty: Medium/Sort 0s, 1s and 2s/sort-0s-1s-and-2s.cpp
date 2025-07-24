class Solution {
  public:
    void sort012(vector<int>& arr) {
        int n= arr.size();
        // code here
        int zero=0,one=0,two=0;
        for(int i=0; i<n;i++){
            if(arr[i]==0) zero++;
            else if(arr[i]==1) one++;
            else two++;
        }
        int i=0;
        while(zero--){
            arr[i]=0;
            i++;
        }
        while(one--){
            arr[i]=1;
            i++;
        }
        while(two--){
            arr[i]=2;
            i++;
        }
        
    }
};