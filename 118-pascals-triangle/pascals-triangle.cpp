class Solution {
public:
    vector<vector<int>> generate(int numRows) {
       vector<vector<int>> res;
       for(int i = 0; i<numRows; i++){
            vector<int> vec;
            int num = i;
            int den = 1;
            vec.push_back(1);
            int num_ = 1;
            for(int j = 0; j<i; j++){
                num_ = num_ * num / den;
                vec.push_back(num_);
                num--;
                den++;
            }
            res.push_back(vec);
       } 
       return res;
    }
};