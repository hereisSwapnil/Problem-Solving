class Solution {
public:
// Using BFS \U0001f7e5
    bool isBipartite(vector<vector<int>>& graph) {
        int V = graph.size();
        vector<int> color(V, -1);

        for(int i = 0; i<V; i++){
            if(color[i] == -1){
                queue<int> q;
                q.push(i);
                color[i] = 0;
                while(!q.empty()){
                    int node = q.front();
                    q.pop();
                    for(auto nei: graph[node]){
                        if(color[nei] == -1){
                            color[nei] = !color[node];
                            q.push(nei);
                        }else if(color[nei] == color[node]){
                            return false;
                        }
                    }
                }     
            }
        }
        return true;
    }
};