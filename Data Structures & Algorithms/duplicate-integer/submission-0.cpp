class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int numz = nums.size();
        for(int i = 0; i < numz; i++){
            for(int j = i + 1; j < numz; j++){
                if(nums[i] == nums[j]) return true;
            }
        }
        return false;
    }
};