class Solution {
public:
    int countCollisions(string directions) {
        int i = 0;
        int n = directions.size();
        
        int ans = 0;

        cout << n << endl;
        while(i+1<n){
            if(directions[i] == 'R' && directions[i+1] == 'L'){
                ans+=2;
                directions[i] = 'S';
                directions[i+1] = 'S';
                if(i>0) i--;
                cout << "RL: " << ans << endl;
            }else if(directions[i] == 'S' && directions[i+1] == 'L'){
                ans+=1;
                directions[i+1] = 'S';
                if(i>0) i--;
                cout << "SL: " << ans << endl;
            }else if(directions[i] == 'R' && directions[i+1] == 'S'){
                ans+=1;
                directions[i] = 'S';
                if(i>0) i--;
                cout << "RS: " << ans << endl;
            }else{
                i++;
            }
        }
        return ans;
    }
};