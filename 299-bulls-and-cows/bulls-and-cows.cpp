class Solution {
public:
    string getHint(string secret, string guess) {
        int cow = 0;
        int bull = 0;
        int n = guess.length();
        unordered_map<char, int> mp;
        
        for (char ch: secret) mp[ch]++;

        for(int i = 0; i<n; i++){
            if(secret[i] == guess[i]){
                bull++;
                mp[secret[i]]--;
            }
        }
        for(int i = 0; i<n; i++){
            if(mp[guess[i]]>0 && secret[i] != guess[i]){
                cow++;
                mp[guess[i]]--;
            }
        }
        return to_string(bull) + 'A' + to_string(cow) + 'B';
    }
};