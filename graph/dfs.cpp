
    void dfs(vector<int> adj[],vector<bool>& vis,int node,vector<int>& ans){
        
        vis[node]=1;
        ans.push_back(node);
        
        for(auto i : adj[node]){
            if(!vis[i])
            dfs(adj,vis,i,ans);
        }
        
        
    }
    
    
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        
        vector<int> ans;
        vector<bool> vis(V+1,false);
        dfs(adj,vis,0,ans);
        return ans;
        // Code here
    }
