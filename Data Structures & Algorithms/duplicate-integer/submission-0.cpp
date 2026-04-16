#include <algorithm>
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        bool duplicateFlag = false;
        // sort array
        sort(nums.begin(), nums.end());
        // if numbers are the same, return true
        for(int i=1; i<nums.size(); i++){
            if(nums[i]==nums[i-1]){
                duplicateFlag = true;
            }
        }
        return duplicateFlag;
    }
};