class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       unordered_map<int, int> freq;
       for(int num:nums){ freq[num]++; }

       // initialize min heap <element, storage, order>
       priority_queue< pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> heap;
       for(auto& element:freq){
         heap.push({element.second, element.first});
         if(heap.size()>k){ heap.pop(); }
       }

       // return result
       vector<int> ans;
       for(int i=0; i<k; i++){
          ans.push_back(heap.top().second);
          heap.pop();
        }
       return ans;
    }
};
