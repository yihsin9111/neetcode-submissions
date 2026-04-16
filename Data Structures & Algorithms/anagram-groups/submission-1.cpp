class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // call by reference
        unordered_map<string, vector<string>> shelf;
        // group objects in terms of the letters they used.
        for(const auto& s:strs){
            string temp = s;
            sort(temp.begin(), temp.end());
            // will automatically update
            shelf[temp].push_back(s);
        }
        vector<vector<string>> result;
        for(auto& pair:shelf){
            result.push_back(pair.second);
        }
        return result;
    }
};
