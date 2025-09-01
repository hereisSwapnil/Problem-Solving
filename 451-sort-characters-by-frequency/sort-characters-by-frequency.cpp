class Solution {
public:
    string frequencySort(string s) {
        vector<pair<int, char>> vec;
        vector<int> chArr(256, 0);
        for(char a: s){
            chArr[a]++;
        }
        for(int i = 0; i<256; i++){
            if(chArr[i] != 0){
                cout << chArr[i] << " " << (i) << endl;
                vec.push_back({chArr[i], i});
            }
        }
        sort(vec.begin(), vec.end(), [](auto &a, auto &b) {
            return a.first > b.first;
        });

        int index = 0;
        for(auto a: vec){
            for(int i = index; i<index+a.first; i++){
                s[i] = a.second;
            }
            index += a.first;
        }


        return s;
    }
};