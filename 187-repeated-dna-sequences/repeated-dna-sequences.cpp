class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        int n = s.length();
        if(n<10){
            return {};
        }

        vector<string> res;
        unordered_map<string, int> mp;

        for (int i = 0; i<=(n-10); i++){
            string sub = s.substr(i, 10);
            mp[sub]++;
        }
        for(auto m: mp){
            if(m.second > 1){
                res.push_back(m.first);
            }
        }
        return res;
    }
};