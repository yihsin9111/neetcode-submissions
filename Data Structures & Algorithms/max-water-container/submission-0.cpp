class Solution {
public:
    int maxArea(vector<int>& heights) {
        int max = 0;
        for(int i=0; i<heights.size()-1; i++){
            for(int j=i+1; j<heights.size(); j++){
                int temp = (j-i)*min(heights[i], heights[j]);
                if(temp>max) max=temp;
            }
        }
        return max;
    }
};
