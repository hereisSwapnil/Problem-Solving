class Solution {
public:
    // Optimal solution
    // vector<vector<int>> merge(vector<vector<int>>& intervals) {
    //     sort(intervals.begin(), intervals.end(), [](const vector<int>& a, const vector<int>& b){
    //         return a[0]<b[0];
    //     });
    //     vector<vector<int>> res;
    //     int k = 0;
    //     res.push_back(intervals[0]);
    //     for(int i = 1; i<intervals.size(); i++){
    //         vector<int>& last = res.back();
    //         if(last[1] >= intervals[i][0]){
    //             last[1] = max(intervals[i][1], last[1]);
    //         }else{
    //             res.push_back(intervals[i]);
    //         }
    //         k++;
    //     }
    //     return res;
    // }

    // Best for Space (In Place)
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), [](const vector<int>& a, const vector<int>& b){
            return a[0]<b[0];
        });
        int k = 0;
        for(int i = 1; i<intervals.size(); i++){
            if(intervals[k][1] >= intervals[i][0]){
                intervals[k][1] = max(intervals[i][1], intervals[k][1]);
            }else{
                k++;
                intervals[k] = intervals[i];
            }
        }
        intervals.resize(k+1);
        return intervals;
    }
};