class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // initialize count map : see whether a number is used
        // notice duplicates!
        sort(nums.begin(), nums.end());
        unordered_map<int, int> count;
        // this enables an O(1) look-up for target
        for(int num:nums) count[num]++;
        // initialize result map
        vector<vector<int>> res;
        for(int i=0; i<nums.size(); i++){
            count[nums[i]]--; // the number is in use
            if(i>0 && nums[i] == nums[i-1]) continue; //[00122]
            for(int j=i+1; j<nums.size(); j++){
                // start checking preceding numbers
                // skip duplicates
                count[nums[j]]--;
                if(j>i+1 && nums[j]==nums[j-1]) continue;
                int target = -(nums[i] + nums[j]);
                if(count[target]>0) res.push_back({nums[i], nums[j], target});
            }
            // restore count map
            for(int j=i+1; j<nums.size(); j++){
                count[nums[j]]++;
            }
        }
        return res;
    }
};
