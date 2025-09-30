class Solution {
public:
// Using BFS \U0001f7e5
    // bool isBipartite(vector<vector<int>>& graph) {
    //     int V = graph.size();
    //     vector<int> color(V, -1);

    //     for(int i = 0; i<V; i++){
    //         if(color[i] == -1){
    //             queue<int> q;
    //             q.push(i);
    //             color[i] = 0;
    //             while(!q.empty()){
    //                 int node = q.front();
    //                 q.pop();
    //                 for(auto nei: graph[node]){
    //                     if(color[nei] == -1){
    //                         color[nei] = !color[node];
    //                         q.push(nei);
    //                     }else if(color[nei] == color[node]){
    //                         return false;
    //                     }
    //                 }
    //             }     
    //         }
    //     }
    //     return true;
    // }

// USING DFS \U0001f7e5
    bool dfs(int node, int c, vector<int>& color, vector<vector<int>>& graph){
        color[node] = c;
        for(auto nei: graph[node]){
            if(color[nei] == -1){
                if(!dfs(nei, 1-c, color, graph)){
                    return false;
                }
            }else if(color[nei] == color[node]){
                return false;
            }
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int V = graph.size();
        vector<int> color(V, -1);

        for(int i = 0; i<V; i++){
            if(color[i] == -1){
                if(dfs(i, 0, color, graph) == false){
                    return false;
                }
            }
        }
        return true;
    }
};