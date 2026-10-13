class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> numbers;
        numbers.reserve(nums.size());
        for (int i = 0; i < nums.size(); i++)
        {
            int complement = target - nums[i];
            auto it = numbers.find(complement);
            if (it != numbers.end())
            {
                return {it->second, i};
            }
            numbers[nums[i]] = i;
        }
        return {};
    }
};
