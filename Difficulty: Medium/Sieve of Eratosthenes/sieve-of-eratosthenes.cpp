class Solution {
  public:
    vector<int> sieve(int n) {
        // code here
        vector<int> ans;
        if(n>1)
        ans.push_back(2);
        
        for(int i =3; i<=n; i++){
            bool check = false;
            for(int j =2; j<= sqrt(i); j++){
                if(i%j==0){
                    check = true;
                    break;
                }
            }
            if(!check) ans.push_back(i);
        }
        return ans;
    }
};