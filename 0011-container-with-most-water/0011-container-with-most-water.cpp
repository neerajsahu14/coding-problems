class Solution {
public:
    int maxArea(vector<int>& height) {
        int n= height.size();
        int l =0, r=n-1;
        int max_area = 0;
        while(l<r){
            int w = r-l;
            int h = min(height[r],height[l]);
            int area = w*h;
            max_area = max(max_area,area);
            if(height[r]<height[l]){
                r--;
            }else{
                l++;
            }
        }
        return max_area;
    }
};