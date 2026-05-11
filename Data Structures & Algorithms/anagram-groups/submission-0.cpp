class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        for(int i = 0; i < strs.size(); i++){
            string v = strs[i];
            sort(v.begin(), v.end());
            mp[v].push_back(strs[i]);
        }
        vector<vector<string>> result;
        for(auto s : mp){
            result.push_back(s.second);
        }
        return result;
    }
};
