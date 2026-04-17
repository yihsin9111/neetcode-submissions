class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int maxi=0;

        int l=0;
        int r=n-1;

        while(l<r){
            int width = r-l;
            int height = min(heights[l] , heights[r]);
            int water = height*width;

             maxi = max(maxi , water);
            
            if(heights[l] <= heights[r]) l++;
            else r--;;
        }
        return maxi;
    }
};