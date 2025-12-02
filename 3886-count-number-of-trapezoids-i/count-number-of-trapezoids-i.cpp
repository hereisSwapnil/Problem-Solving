class Solution {
public:
    int countTrapezoids(vector<vector<int>>& points) {
        const int mod = 1e9 + 7;
        unordered_map<int, int> mp;

        for(auto i: points){
            mp[i[1]]++;
        }

        vector<long long> j;
        for(auto i: mp){
            if (i.second<2) continue;
            long long r = (i.second % 2 == 0) ? ((i.second/2)*(i.second-1))%mod : ((i.second)*((i.second-1)/2))%mod;
            j.push_back(r);
        }

        long long ans = 0;
        for(int i = 0; i<j.size(); i++){
            for(int k = i+1; k<j.size(); k++){
                ans+=((j[i])*(j[k]));
            }
        }
        return ans % mod;
    }
};