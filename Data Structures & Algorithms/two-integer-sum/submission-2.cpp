class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> m;
        for(int i=0; i<nums.size(); i++){
            int left = target - nums[i];
            // is cirrent number a counterpart of another number?
            // if yes, return; if no, add in the map and keep searching.
            if(m.find(left)!=m.end()){
                return {m[left],i};
            }
            m[nums[i]]=i;
        }
        return {};
    }
};
