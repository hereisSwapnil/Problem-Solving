class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int l = 0;
        int r = 0;
        int ans = 0;
        unordered_set<char> ss;
        while(r < n){
            if(ss.find(s[r]) == ss.end()){
                ss.insert(s[r]);
                r++;
                ans = max(ans, r - l);
            }else{
                ss.erase(s[l]);
                l++;
            }
        }
        return ans;
    }
};