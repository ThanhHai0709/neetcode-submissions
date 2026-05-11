class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        int n = nums.size();
        int idex = 0, jdex = idex + 1;
        while(idex < n - 1){
            if(jdex == n){
                idex++;
                jdex = idex + 1;
            }
            if(nums[idex] + nums[jdex] == target){
                result.push_back(idex);
                result.push_back(jdex);
                break;
            }
            jdex++;
        }
        return result;
    }
};
