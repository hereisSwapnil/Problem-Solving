class Solution {
public:
    bool isValid(string s) {
        unordered_map<char, char> mp = {
            {')', '('},
            {'}', '{'},
            {']', '['}
        };

        stack<char> st;
        for(char a: s){
            if(mp.find(a) == mp.end()){
                st.push(a);
            }else{
                if(st.empty()) return false;
                char b = st.top();
                if(b == mp[a]){
                    st.pop();
                }else{
                    return false;
                }
            }
        }
        if(st.empty()) return true;
        else return false;
    }
};