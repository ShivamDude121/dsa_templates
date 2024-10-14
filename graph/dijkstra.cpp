 vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        vector<int> ans(V,1e9);
        set<pair<int,int>> s;
        s.insert({0,S});
        ans[S]=0;
        
        
        while(s.size()){
            pair<int,int> x=(*s.begin());
            s.erase(x);
            
            
            for(auto i : adj[x.second]){
            int wt=i[1]+x.first;
            int node=i[0];
            
            if(wt< ans[node]){
                if(ans[node]!=INT_MAX)
                s.erase({ans[node],node});
                
                ans[node]=wt;
                s.insert({wt,node});
                
                
                
            }
     
            }
        }
        
        return ans;
    }
