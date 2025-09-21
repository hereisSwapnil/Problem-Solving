class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        int less = INT_MAX;
        for(auto i: tasks){
            less = min(less, i[0]+i[1]);
        }
        return less;
    }
};