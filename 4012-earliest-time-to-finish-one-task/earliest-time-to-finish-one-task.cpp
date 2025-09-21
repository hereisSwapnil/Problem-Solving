class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        int less = INT_MAX;
        int n = tasks.size();
        for(int i = 0; i<n; i++){
            int sum = tasks[i][0]+tasks[i][1];
            if(sum<less){
                less = sum;
            }
        }
        return less;
    }
};