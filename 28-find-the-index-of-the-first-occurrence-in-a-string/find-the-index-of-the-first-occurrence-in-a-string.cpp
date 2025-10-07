class Solution {
public:
    int strStr(string haystack, string needle) {
        int l = 0;
        int n = haystack.size();
        int k = needle.size();

        int ans = -1;
        while(ans == -1 && l<n){
            int i = 0;
            int j = l;
            if(haystack[j] == needle[i]){
                while(haystack[j] == needle[i] && i<k && j<n){
                    i++;
                    j++;
                }
                if(i == k){
                    ans = l;
                }
            }
            l++;
        }
        return ans;
    }
};