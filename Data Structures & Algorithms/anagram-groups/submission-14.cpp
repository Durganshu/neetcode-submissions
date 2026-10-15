class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagram_map;
        
        for (const string& s : strs) 
        {
            int count[26] = {0};
            for (char c : s) {
                count[c - 'a']++;
            }
            
            string key = "";
            for (int i = 0; i < 26; ++i) 
            {
                key += "#" + to_string(count[i]);
            }
            
            anagram_map[key].push_back(s);
        }

        vector<vector<string>> result;
        result.reserve(anagram_map.size());
        for (auto& pair : anagram_map) 
        {
            result.push_back(move(pair.second));
        }
        return result;
    }
};