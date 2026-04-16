class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> m;
        for(int i=0; i<nums.size(); i++){
            int left = target - nums[i];
            if(m.find(left)!=m.end()){
                return {m[left],i};
            }
            m[nums[i]]=i;
        }
        return {};
    }
};
