class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;
        int maxC = 0;
        for(char i: s){
            if(i == '(') st.push('(');
            else if(i == ')') st.pop();

            maxC = max(maxC, (int)st.size());
        }
        return maxC;
    }
};