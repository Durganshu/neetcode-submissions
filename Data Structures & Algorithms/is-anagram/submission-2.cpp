class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s == t) return true;
        if (s.length() != t.length()) return false;
        else
        {
            std::unordered_map<char, int> tmp1, tmp2;
            for (const char & c : s)
            {
                tmp1[c]++;
            }
            for (const char & c : t)
            {
                tmp2[c]++;
            }
            if (tmp1.size() != tmp2.size()) return false;
            else
            {
                for (const auto & [c, count] : tmp1)
                {
                    if (tmp2[c] != count) return false;
                }
            }
        }
        

        return true;
        
    }
};
