class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> frequency;
        frequency.reserve(nums.size());
        for (const auto & n : nums)
        {
            frequency[n]++;
        }

        vector<pair<int, int>> vec(frequency.begin(), frequency.end());

        sort(vec.begin(), vec.end(), [](const auto& a, const auto& b) {
            return a.second > b.second; 
        });

        vector<int> result;
        result.resize(k);
        for (int i = 0; i < k; i++)
        {
            result[i] = vec[i].first;
        }
        return result;
    }
};
