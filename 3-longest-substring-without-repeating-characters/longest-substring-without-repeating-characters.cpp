class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       unordered_set<char> ss;
       int maxL = 0;
       int n = s.length();
       int i = 0;

       for(int j = 0; j<n; j++){
            while(ss.count(s[j]) > 0){
                ss.erase(s[i]);
                i++;
            }
            ss.insert(s[j]);
            maxL = max(maxL, j-i+1);
       }
       return maxL;
    }
};