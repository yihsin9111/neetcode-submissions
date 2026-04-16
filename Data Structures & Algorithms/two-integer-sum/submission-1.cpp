class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0; i<nums.size()-1; i++){
            for(int j=i+1; j<nums.size(); j++){
                if(nums[i]+nums[j]==target){
                    vector<int> ans;
                    ans.push_back(i); ans.push_back(j);
                    return ans;
                }
            }
        }
        vector<int> ans;
        ans.push_back(nums.size()); ans.push_back(nums.size());
        return ans;
    }
};
