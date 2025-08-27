class Solution {
public:
    // Naive Approach
    // int totalFruit(vector<int>& fruits){
    //     int n = fruits.size();
    //     int maxL = 0;
    //     for (int i = 0; i < n; i++)
    //     {
    //         pair<int, int> p = {-1, -1};
    //         int j;
    //         for (j = i; j < n; j++)
    //         {
    //             if (p.first == -1) {
    //                 p.first = fruits[j];
    //             } else if (p.second == -1 && fruits[j] != p.first) {
    //                 p.second = fruits[j];
    //             }

    //             if (fruits[j] != p.first && fruits[j] != p.second) break;
    //         }
    //         j--;
    //         maxL = max(maxL, j - i + 1);
    //     }
    //     return maxL;
    // }

    // Optimized approach
    // int totalFruit(vector<int>& fruits) {
    //     int n = fruits.size();
    //     int i = 0;
    //     int j = 0;
    //     unordered_map<int, int> mp;
    //     int maxL = 0;
    //     while(j<n){
    //         mp[fruits[j]]++;
    //         if(mp.size()>2){
    //             mp[fruits[i]]--;
    //             if(mp[fruits[i]] == 0) mp.erase(fruits[i]);
    //             i++;
    //         }else{
    //             maxL = max(maxL, j-i+1);
    //         }
    //         j++;
    //     }
    //     return maxL;
    // }

    // best approach
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size();
        if(n == 0) return 0;

        int maxL = 0;
        int lastFruit = -1, secondLastFruit = -1;
        int lastFruitCount = 0;
        int currentMax = 0;

        for(int fruit : fruits){
            if(fruit == lastFruit || fruit == secondLastFruit){
                currentMax++;
            } else {
                currentMax = lastFruitCount + 1;
            }

            if(fruit == lastFruit){
                lastFruitCount++;
            } else {
                lastFruitCount = 1;
                secondLastFruit = lastFruit;
                lastFruit = fruit;
            }

            maxL = max(maxL, currentMax);
        }

        return maxL;
    }
};