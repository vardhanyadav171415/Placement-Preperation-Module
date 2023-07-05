 class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
     
        vector<int> result;
        unordered_map<int, int> counts;

        int n = nums.size();
        int threshold = n / 3;
 
        for (int num : nums) {
            counts[num]++;
        }
 
        for (auto& pair : counts) {
            if (pair.second > threshold) {
                result.push_back(pair.first);
            }
        }

        return result;

    }
};