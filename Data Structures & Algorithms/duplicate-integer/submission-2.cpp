class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_map<int, int> count;
        for (const auto & n :nums)
        {
            if (count[n] == 1)
            {
                return true;
            }
            count[n]++;
        }   
        return false;     
    }
};