class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product = 1;
        vector<int> prefix;
        for(int num:nums){
            prefix.push_back(product);
            product *= num;
        }
        
        product = 1;
        vector<int> suffix;
        for(int i=nums.size()-1;i>-1;i--){
            suffix.push_back(product);
            product *= nums[i];
        }
        reverse(suffix.begin(), suffix.end());
        
        vector<int> ans;
        for(int i=0; i<nums.size(); i++){
            ans.push_back(prefix[i]*suffix[i]);
        }
        return ans;
    }
};
