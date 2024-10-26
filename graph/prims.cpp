  int spanningTree(int V, vector<vector<int>> adj[])
    {
        // code here
        
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> p;
        vector<int> vis(V,0);
        
        
        p.push({0,0});
        int ans=0;
        
        
        while(p.size()){
            
            pair<int,int> x=p.top();
            p.pop();
            
            
            int node=x.second;
            int wt=x.first;
            
            if(vis[node]==1) continue;
            
            vis[node]=1;
            ans+=wt;
            
            for(auto i : adj[node]){
                int nxt_node=i[0];
                int load=i[1];
                if(vis[nxt_node]==0)
                p.push({load,nxt_node});
            }
            
        }
        
        
        return ans;
    }
