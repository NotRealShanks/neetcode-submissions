class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> mySet;

        for (int n : nums) {
            if (mySet.count(n) == 0) {
                mySet.insert(n);
            }
            else {
                return true;
            }
        }

        return false;
    }
};