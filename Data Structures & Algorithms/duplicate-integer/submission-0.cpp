class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> seen;
        
        for (int i = 0; i < nums.size(); i++) {
            // If the number is already in the set, we found a duplicate
            if (seen.find(nums[i]) != seen.end()) {
                return true;
            }
            // Otherwise, insert it into the set
            seen.insert(nums[i]);
        }
        
        return false;
        }
        
    };
