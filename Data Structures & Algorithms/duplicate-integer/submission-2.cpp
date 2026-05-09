class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> secondNums(nums.begin(), nums.end());
        return nums.size() > secondNums.size();
    }
};