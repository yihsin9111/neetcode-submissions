class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       unordered_map<int, int> freq;
       for(int num:nums){ freq[num]++; }

       // throw numbers of same frequency into same bucket
       vector<vector<int>> bucket(nums.size()+1);
       for(const auto& element:freq){
         bucket[element.second].push_back(element.first);
       }

       // track from top-down, collect elements
       vector<int> ans;
       for(int i=nums.size();i>-1;i--){
            for(int num:bucket[i]){
                ans.push_back(num);
                if(ans.size()==k) return ans;
            }
       }
       return ans;
    }
};
