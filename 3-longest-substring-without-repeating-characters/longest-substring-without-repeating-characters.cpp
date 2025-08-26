class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        unordered_map<char, int> lastSeen;
        int l = 0, ans = 0;

        for (int r = 0; r < n; r++) {
            if (lastSeen.find(s[r]) != lastSeen.end()) {
                l = max(l, lastSeen[s[r]] + 1);
            }
            lastSeen[s[r]] = r;
            ans = max(ans, r - l + 1);
        }
        return ans;
    }
};