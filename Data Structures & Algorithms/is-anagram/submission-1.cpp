class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;
        int n = s.length();
        int idex = 0;
        vector<char> x, y;
        while(idex < n){
            x.push_back(s[idex]);
            y.push_back(t[idex]);
            idex++;
        }
        sort(x.begin(), x.end());
        sort(y.begin(), y.end());
        return x == y;
    }
};
