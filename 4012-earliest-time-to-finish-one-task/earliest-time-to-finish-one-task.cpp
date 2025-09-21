class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        int less = INT_MAX;
        for(auto i: tasks){
            int sum = i[0]+i[1];
            if(sum<less){
                less = sum;
            }
        }
        return less;
    }
};