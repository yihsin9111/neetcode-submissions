class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i=0, j=heights.size()-1;
        int max_area = -1;
        while(i<j){
            int temp = (j-i)*min(heights[i], heights[j]);
            max_area = max(max_area, temp);
            if(heights[i]<=heights[j]) i++;
            else j--;
        }
        return max_area;
    }
};
