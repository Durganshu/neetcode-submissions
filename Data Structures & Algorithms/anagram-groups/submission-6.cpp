class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<int>> stringMap;
        stringMap.reserve(strs.size());
        auto strCopy = strs;
        for (auto & str : strCopy)
        {
            std::sort(str.begin(), str.end());
        }
        for (auto i = 0; i < strCopy.size(); i++)
        {
            stringMap[strCopy[i]].emplace_back(i);
        }
        vector<vector<string>> result;
        for (const auto & sM : stringMap )
        {
            vector<string> temp;
            for (auto & i : sM.second)
            {
                temp.emplace_back(strs[i]);
            }
            result.emplace_back(temp);
        }
        return result;
    }
};
