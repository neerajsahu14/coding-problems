class Solution {
public:
    int findTheWinner(int n, int k) {
       vector<int> arr;
       for(int i=1; i<=n; i++){
        arr.push_back(i);
       }
       int a=0;
       while(arr.size()>1){
        int x= (a+k-1)%arr.size();
        arr.erase(arr.begin()+x);
        a=x;
       }
        return arr[0];
    }
};