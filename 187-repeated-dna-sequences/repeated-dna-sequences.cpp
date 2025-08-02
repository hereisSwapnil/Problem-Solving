class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        int n = s.length();
        if(n<10){
            return {};
        }

        set<string> seen;

        set<string> res;

        for (int i = 0; i<=(n-10); i++){
            string sub = s.substr(i, 10);
            if(seen.count(sub)>0){
                res.insert(sub);
            }
            seen.insert(sub);
        }
        return vector<string>(res.begin(), res.end());
    }
};