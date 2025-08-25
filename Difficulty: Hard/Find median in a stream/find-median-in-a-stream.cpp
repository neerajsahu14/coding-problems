class Solution {
  public:
    vector<double> getMedian(vector<int> &arr) {
        // code here
        vector<double> ans;
        priority_queue<int> max_heap;
        priority_queue<int,vector<int>,greater<int>>min_heap;
        
        for(int num : arr){
            addNum(num,max_heap,min_heap);
            ans.push_back(find(max_heap,min_heap));
        }
        
        return ans;
    }
    
    void addNum(
        int num,
        priority_queue<int> &max_heap,
        priority_queue<int,vector<int>,greater<int>> &min_heap
        ){
        
        if(max_heap.size()==0 || num <= max_heap.top()) max_heap.push(num);
        else min_heap.push(num);
        
        if(max_heap.size() > min_heap.size() +1 ){
            min_heap.push(max_heap.top());
            max_heap.pop();
        }
        else if(max_heap.size() < min_heap.size()){ 
            max_heap.push(min_heap.top());
            min_heap.pop();
        }
    }
    double find(
        priority_queue<int> &max_heap,
        priority_queue<int,vector<int>,greater<int>> &min_heap
        ){
            if(max_heap.size()>min_heap.size()) return max_heap.top();
            return (double)(max_heap.top() +  min_heap.top())/2.0;
    }
};
