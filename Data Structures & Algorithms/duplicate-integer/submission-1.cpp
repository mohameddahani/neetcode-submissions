class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> secondNums(nums.begin(), nums.end());
        if (nums.size() > secondNums.size()) {
            return true;
        }
        return false;
    }
};