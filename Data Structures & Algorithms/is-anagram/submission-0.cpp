class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;

        int n = s.size();
        unordered_map<char, int> map_s;
        unordered_map<char, int> map_t;

        for (int i = 0; i < n; i++) {
            map_s[s[i]]++;
            map_t[t[i]]++;
        }

        return map_s == map_t;
        

    }
};
