class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        // for every number, see if the residual is in numbers
        // don't have to look at smaller indexes
        for(int i=0; i<numbers.size()-1; i++){
            int residual=target-numbers[i];
            for(int j=i+1; j<numbers.size(); j++){
                if(residual==numbers[j]) return {i+1, j+1};
            }
        }
    }
};
