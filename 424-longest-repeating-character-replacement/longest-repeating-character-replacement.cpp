class Solution {
public:
    // naive or bruteforce approach
    // int characterReplacement(string s, int k) {
    //     int n = s.size();
    //     int maxL = 0;
    //     for(int i = 0; i<n; i++){
    //         int charHash[26] = {0};
    //         int maxF = 0;
    //         for(int j = i; j<n; j++){
    //             charHash[s[j]-'A']++;
    //             maxF = max(maxF, charHash[s[j]-'A']);
    //             int changes = (j-i+1-maxF);
    //             if(changes > k){
    //                 break;
    //             }else{
    //                 maxL = max(maxL, j-i+1);
    //             }
    //         }
    //     }
    //     return maxL;
    // }

    int characterReplacement(string s, int k) {
        vector<int> count(26, 0);
        int maxCount = 0;
        int maxL = 0;
        int i = 0;

        for(int j = 0; j < s.size(); j++) {
            count[s[j] - 'A']++;
            maxCount = max(maxCount, count[s[j] - 'A']);

            while((j - i + 1) - maxCount > k) {
                count[s[i] - 'A']--;
                i++;
            }

            maxL = max(maxL, j - i + 1);
        }

        return maxL;
    }

};