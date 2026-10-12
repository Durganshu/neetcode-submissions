class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> count;
        for (const auto & n :nums)
        {
            count.insert(n);
        }   
        return count.size() != nums.size();     
    }
};