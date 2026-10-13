class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> numbers;
        for (int i = 0; i < nums.size(); i++)
        {
            if (numbers.find(target - nums[i]) == numbers.end())
            {
                numbers[nums[i]] = i;
            }
            else
            {
                return {numbers[target - nums[i]], i };
            }
        }
        return {};
    }
};
