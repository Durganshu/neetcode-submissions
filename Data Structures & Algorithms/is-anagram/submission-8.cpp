class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s == t) return true;
        if (s.length() != t.length()) return false;
        else
        {
            std::array<int, 26> arr1 = {};
            std::array<int, 26> arr2 = {};
            for (const auto & c : s)
            {
                arr1[c - 97]++;
            }
            for (const auto & c : t)
            {
                arr2[c - 97]++;
            }

            for (size_t i = 0; i < 26; i++)
            {
                if (arr2[i] != arr1[i]) return false;
            }
            return true;
        }
        
    }
};
