class Solution {
public:
    bool isSubsequence(string s, string t) {
        int j = 0;
        for(int i = 0; i<s.size(); i++){
            while(t[j] != s[i] && j<t.size()){
                j++;
            }
            cout << t[j] << " " << s[i] << endl;
            if(t[j] != s[i]){
                return false;
            }
            cout << "i " << i << " j " << j << endl;
            j++;
        }
        return true;
    }
};